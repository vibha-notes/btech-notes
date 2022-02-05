var http = require('http');

// Need to do npm install node-fetch
var fetch = require('node-fetch');

fetch('http://localhost:8080/7-1-sample.txt', {
    method: 'POST',
    headers: {'Content-type': 'application/json'},
    body: JSON.stringify({
        "name": "Suraj",
        "srn": "PES3"
    })
})
.then((res) => res.text())
.then((res) => {
    console.log(res);
    console.log('hi');
})
