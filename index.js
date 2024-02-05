const express = require('express');
const app = express();
const multer = require('multer');
const fs = require("node:fs/promises");

try {
    await fs.readdir(__dirname + '/public/uploads');
} catch {
    await fs.mkdir(__dirname + '/public/uploads');
}

let currentDir = parseInt((await fs.readdir(__dirname + '/public/uploads')).pop() || '0');
let dest = __dirname + `/public/uploads/${currentDir}/`;

let a = {
    _upload: multer({
        dest
    }),
    get upload() {
        return this._upload;
    }
}

reloadDb = (d) => (dest = d, a._upload = multer({ dest }), a._upload.dest = dest);

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/public/index.html');
});

app.get('/upload', (req, res) => {
    res.send(
        `<a href="/d/0">Download</a>`
    );
});

app.post('/upload', (...args) => (console.log(a.upload.dest), a.upload.array("image")(...args), setTimeout(() => args[2]?.call({}), 2000)), (req, res) => {
    currentDir ++;
    reloadDb(__dirname + `/public/uploads/${currentDir}/`);
    console.log(currentDir, dest);
    res.json({success: true});
});

app.get('/d/:id', async (req, res) => {
    try {
        var id = req.params.id;
        var files = await fs.readdir(__dirname + `/public/uploads${id ? `/${id}` : ''}`);

        if (!files.length) {
            return res.json({error: "No files found."});
        }

        var filename = files[0];

        return res.download(__dirname + `/public/uploads/${id}/` + filename, "file" + filename.slice(filename.lastIndexOf('.')));
    } catch {
        return res.json({error: "File not found."})
    }
});

app.listen(9000, () => {
    console.log('Listening for requests...');
});