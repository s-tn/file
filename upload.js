const { formidable } = require('./formidable');
const fs = require('fs/promises');
const fsSync = require('fs');

module.exports = class Uploader {
    constructor(params = {}) {
        this.path = params.path || "./";
        this.current = this.currentId();
    }
    currentId() {
        let files = fsSync.readdirSync(this.path).sort((a, b) => parseInt(a) - parseInt(b));
        let current = parseInt(files.pop() || '-1');
        return current + 1;
    }
    async save(name, metadata) {
        let dir = this.path + '/' + this.current;
        try {
            await fs.readdir(dir);
        } catch {
            await fs.mkdir(dir);
        }

        await fs.cp(name, dir + '/data');
        await fs.writeFile(dir + '/metadata.json', JSON.stringify(metadata));

        this.current = this.currentId();

        return true;
    }
    upload() {
        return async (req, res, next = () => {}) => {
            try {
                let form = formidable({
                    uploadDir: __dirname + "/raw",
                });
                console.log('saving');
                form.on('error', function(err) { console.log(err); });
                form.on('aborted', function() { console.log('Aborted'); });
                let [fields, { image }] = await form.parse(req);
                console.log('saved');
                
                for (let file of image) {
                    let size = await fs.stat(file.filepath).then(
                        (stat) => stat.size
                    );
                    
                    let metadata = {
                        id: Date.now(),
                        filename: file.originalFilename,
                        size,
                        type: file.mimetype,
                    }

                    console.log(file.filepath);

                    await this.save(file.filepath, metadata);
                }

                next();
            } catch(e) {
                console.error(e);
                next();
            }
        }
    }
    download() {
        return async (req, res, next = () => {}) => {
            try {
                let id = req.params.id;
                let files = await fs.readdir(this.path +
                    (id ? `/${id}` : ''));
                if (!files.length) {
                    return res.json({error: "No files found."});
                }
                let metadata = JSON.parse(await fs.readFile(this
                    .path + `/${id}/metadata.json`));
                res.writeHead(200, {
                    'Content-Disposition': `attachment; filename=${metadata.filename}`,
                    'Content-Type': metadata.type,
                    'Content-Length': metadata.size,
                });

                fsSync.createReadStream
                    (this.path + `/${id}/data`).pipe(res).on('finish', () => {
                        res.end();

                        next();
                    });
            } catch(e) {
                console.error(e);
                next();
            }

        }
    }
    display() {
        return async (req, res, next = () => {}) => {
            try {
                let id = req.params.id;
                let files = await fs.readdir(this.path +
                    (id ? `/${id}` : ''));
                if (!files.length) {
                    return res.json({error: "No files found."});
                }
                let metadata = JSON.parse(await fs.readFile(this
                    .path + `/${id}/metadata.json`));
                res.writeHead(200, {
                    'Content-Type': 'application/json'
                });
                if (!metadata.type.startsWith('image')) {
                    return res.json({error: "Not an image."});
                }
                const data = await fs.readFile(this.path + `/${id}/data`);
                const url = "data:image/png;base64," + data.toString('base64');

                res.send(`
                <html>
                    <head>
                        <meta property="og:image" content="${url}">
                        <style>
                            body {
                                display: flex;
                                justify-content: center;
                                align-items: center;
                                height: 100vh;
                                margin: 0;
                            }
                            image {
                                max-width: 100%;
                                max-height: 100%;
                            }
                        </style>
                    </head>
                    <body>
                        <image src="${url}" />
                    </body>
                </html>`);
            } catch(e) {
                console.error(e);
                next();
            }
        }
    }
}