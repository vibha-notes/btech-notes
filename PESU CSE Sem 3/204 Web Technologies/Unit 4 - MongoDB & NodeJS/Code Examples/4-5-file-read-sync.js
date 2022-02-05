const fs = require('fs');

/* Synchronous */

var data = fs.readFileSync('4-4-read_from.csv', 'utf-8');

// Regular expression
/* 
Optional \r and \n 

CR is the Carriage Return ASCII character 
(Code 0x0D), usually represented as \r. 
LF is the Line Feed character (Code 0x0A), 
usually represented as \n.
*/
var lines = data.split(/\r?\n/);

lines.forEach((line) => {
    var words = line.split(',');
    console.log(words[0] + ' ' +  words[1]);
})

