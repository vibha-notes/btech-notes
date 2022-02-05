var fs = require('fs');
var data = '';

// Create a readable stream
var readerstream = fs.createReadStream('10-2-data.txt');

// Setting the encoding

readerstream.setEncoding('UTF-8');

// Handle the stream events -> data, end, error
readerstream.on('data', function (chunk) {
    data += chunk;
});
readerstream.on('end', function (err) {
    console.log(data);
});
readerstream.on('err', (err) => {
    console.log(err.stack);
});