const express = require('express');
const app = express();
const fs = require("node:fs/promises");
const uploader = new (require("./upload"))({
    path: __dirname + '/public/uploads'
});

express.raw = () => null;

try {
    await fs.readdir(__dirname + '/public/uploads');
} catch {
    await fs.mkdir(__dirname + '/public/uploads');
}

app.use(express.static('public'));

app.get('/upload', (req, res) => {
    res.writeHead(405);
    res.end("405 Method Not Allowed");
});

app.post('/upload', uploader.upload(), (req, res) => {
    res.json({success: true, id: uploader.current - 1, url: req.headers.origin + `/d/${uploader.current - 1}`});
});
app.get('/d/:id', uploader.download(), (req, res) => {
    res.json({error: "No files found."});
});
app.get('/data/:id', async (req, res) => {
    let id = req.params.id;
    let files = await fs.readdir(__dirname + '/public/uploads' + (id ? `/${id}` : ''));
    if (!files.length) {
        return res.json({error: "No files found."});
    }
    let metadata = JSON.parse(await fs.readFile(__dirname + `/public/uploads/${id}/metadata.json`));
    res.writeHead(200, {
        'Content-Type': 'application/json'
    });
    res.json(metadata);
});
app.get('/files', async (req, res) => {
    var origin = (req.headers['x-forwarded-proto'] || 'http') + '://' + req.headers.host;
    let files = await fs.readdir(__dirname + '/public/uploads');
    files = files.sort((a, b) => parseInt(a) - parseInt(b)).map(
        async (file) => {
            let metadata = JSON.parse(await fs.readFile(__dirname + `/public/uploads/${file}/metadata.json`));
            return {
                id: file,
                filename: metadata.filename,
                size: metadata.size,
                type: metadata.type,
                url: origin + `/d/${file}`,
                uploaded: new Date(metadata.id).toISOString()
            }
        }
    );
    res.json(await Promise.all(files));
});

app.listen(9000, () => {
    console.log('Listening for requests...');
});
