const express = require('express');
const app = express();
const multer = require('multer');

const upload = multer({
    dest: 'public/uploads/'
});

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/public/index.html');
});

app.post('/upload', upload.array("image"), (req, res) => {
    res.redirect('/upload');
    res.json({data: "success"})
})

app.listen(80, () => {
    console.log('Listening for requests...');
})
