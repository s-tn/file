// formidable clone

module.exports = {};

module.exports.formidable = function (params = {}) {
    return new Formidable(params);
}

class Formidable {
    constructor(params = {}) {
        this.uploadDir = params.uploadDir || "./";
    }
    parse(req) {
        return new Promise((resolve, reject) => {
            let form = new FormidableParser({
                uploadDir: this.uploadDir,
            });
            form.parse(req, (err, fields, files) => {
                if (err) {
                    reject(err);
                }
                resolve([fields, files]);
            });
        });
    }
}