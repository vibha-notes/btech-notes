var fs = require('fs');
var data = 'I like to work at PES university';

// Create a writable stream
var writerstream = fs.createWriteStream('10-4-data.txt');

// Write onto file and set the encoding
writerstream.write(data,'UTF-8');

// Mark the end of the file
writerstream.end();

// Handle the stream events  -> finish, error
writerstream.on('finish', function()
{
    console.log('write completed');
});
writerstream.on('error', function(err)
{
    console.log(error.stack);
});
console.log('program ended');