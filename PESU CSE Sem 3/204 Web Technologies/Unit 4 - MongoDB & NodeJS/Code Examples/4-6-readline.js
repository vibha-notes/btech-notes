const fs = require('fs');
readline = require('readline');

rl = readline.createInterface({
    input: fs.createReadStream('4-4-read_from.csv'),
    output: process.stdout,
    terminal: false,
})

// On reading a line
/* if process.stdin used, infinite loop */
rl.on('line', function(line) {
    var words = line.split(',');
    console.log(words[0] + ' ' + words[1]);
})