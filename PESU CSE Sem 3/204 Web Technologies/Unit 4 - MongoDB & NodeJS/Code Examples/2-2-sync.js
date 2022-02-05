// Read docs
const fs = require('fs');

// Executes synchronously
console.log('Reading the contents...\n\n');
const data = fs.readFileSync('1-0-intro.txt', 'utf-8');
console.log('Data: ', data);

const fd = fs.open('1-0-intro.txt');
data = fs.readSync(fd, )
fs.read(fd, () => {
    
})