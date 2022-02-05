const fs = require('fs');

/* 
Write to a file - file will be created if not existing

fs.writeFile
fs.open in w or a mode (a is append)
file.write (file is handler from open)
fs.appendFile
*/

/* Async */
fs.writeFile('4-2-test.txt', 
    'Content to be written', 
    function (err) {
        if (err) console.log(err);
        console.log('Write successful!');
    }
);

/* Only one at a time? */
fs.appendFile('4-2-test.txt', 
    '\nExtra to be added!', 
    function (err) {
        if (err) console.log(err);
        console.log('Write successful!');
    }
);

fs.open('4-3-test.txt', 'w', function(err, file) {
    if (err) throw err;
    fs.write(file, 'Content to write!!', function(err) {
        if (err) throw err;
        console.log('Saved!');
    })
})