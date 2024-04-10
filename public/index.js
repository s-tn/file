function dropHandler(event) {
    event.preventDefault();
    document.body.classList.remove('dragging');
    const files = event.dataTransfer.files;
    const formData = new FormData();
    for (let file of files) {
        formData.append('image', file);
    }
    fetch('/upload', {
        method: 'POST',
        body: formData,
        headers: {
            //'Content-Type': 'multipart/form-data'
        }
    }).then(() => {
        loadFiles();
    });
}

function dragOverHandler(event) {
    event.preventDefault();

    document.body.classList.add('dragging');
}

function dragEndHandler(event) {
    event.preventDefault();

    document.body.classList.remove('dragging');
}

function upload() {
    document.getElementById('fileInput').click();
}

function inputHandler(event) {
    const files = event.target.files;
    const formData = new FormData();
    for (let file of files) {
        formData.append('image', file);
    }
    fetch('/upload', {
        method: 'POST',
        body: formData,
        headers: {
            //'Content-Type': 'multipart/form-data'
        }
    }).then(() => {
        event.target.value = '';
        loadFiles();
    });
}

function loadFiles() {
    fetch('/files')
        .then(response => response.json())
        .then(data => {
            data = data.map((file, index) => {
                if (file.size > 1024 * 1024) {
                    file.size = (file.size / (1024 * 1024)).toFixed(2) + ' MB';
                } else if (file.size > 1024) {
                    file.size = (file.size / 1024).toFixed(2) + ' KB';
                } else {
                    file.size = file.size + ' B';
                }

                file.id = index;

                return file;
            }).toReversed();

            let files = document.getElementById('files');
            files.innerHTML = '';

            for (let i = 0; i < data.length; i ++) {
                let file = data[i];

                files.innerHTML += `<div class="file">
                    <span class="file-name">${file.filename}</span>
                    <span class="file-date">${new Date(file.uploaded).toLocaleTimeString([], {
                        year: 'numeric', month: 'numeric', day: 'numeric',
                        hour: '2-digit', minute: '2-digit'
                    })}</span>
                    <span class="file-size">${file.size}</span>
                    <button class="download-btn" onclick="location.href = '/d/${i}'">Download</button>
                </div>`
            }
        });
}