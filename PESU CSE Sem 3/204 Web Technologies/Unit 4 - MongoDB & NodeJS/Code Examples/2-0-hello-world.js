// To execute: node <file_name>
// Not a full-fledged server; must require http

console.log('Hello World!');

// Can use access specifiers
const name = "Cole";
console.log("Hello %s", name);

// Once, non-blocking
setTimeout(() => {
    console.log("Timer stopped");
}, 1000);
console.log("Timer started");

/* We need ro require for other functionalities */

const fs = require('fs');
fs.stat('2-0-hello-world.js', (err, stats) => {
    if (err) throw err;
    console.log('Stats: ', JSON.stringify(stats))
});

fs.rename('new.js', 'newer.js', (err) => {
    console.log('Rename successful');
    fs.stat('newer.js', (err, stats) => {
        if (err) {
            console.log(err);
        }
        else {
            console.log('Stats: ', JSON.stringify(stats))
        }
    });
});