const fs = require('fs');

// Asynchronous

// Binary encoding
fs.readFile('1-0-intro.txt', (err, data) => {
    if (err) throw err;
    console.log('Binary contents: ', data);
})

// utf-8
fs.readFile('1-0-intro.txt', 'utf-8', (err, data) => {
    if (err) throw err;
    console.log('utf-8 contents: ', data);
})

// Executes this line first
console.log("Reading the contents...\n\n");

