var fs = require('fs');
var zlib = require('zlib');

// Compress
fs.createReadStream('10-2-data.txt')
.pipe(zlib.createGzip())
.pipe(fs.createWriteStream('10-6-data.txt.gz'));

console.log('File compressed');