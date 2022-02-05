var http = require('http');

// Need to do npm install node-fetch
var fetch = require('node-fetch');

/* fetch('http://localhost:3000/student', {
    method: 'POST',
    headers: {'Content-type': 'application/json'},
    body: JSON.stringify({
        "name": "Smaran",
        "srn": "PES4",
        "dept": "ECE"
    })
})
.then((res) => res.text())
.then((res) => {
    console.log(res);
}) */

/* fetch('http://localhost:3000/student/PES4', {
    method: 'GET',
    headers: {'Accept': 'application/json'},
})
.then((res) => res.json())
.then((res) => {
    console.log(res);
}) */


fetch('http://localhost:3000/student', {
    method: 'GET',
    headers: {'Accept': 'application/json'},
})
.then((res) => res.json())
.then((res) => {
    console.log(res);
})