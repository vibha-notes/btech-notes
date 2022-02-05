var fs = require('fs');
var zlib = require('zlib');

// Compress
fs.createReadStream('10-6-data.txt.gz')
.pipe(zlib.createGunzip())
.pipe(fs.createWriteStream('10-8-data.txt'));

console.log('File uncompressed');