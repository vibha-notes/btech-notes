var http = require('http');

// GET request
var options = {
    host: 'localhost',
    port: '8080', 
    path: '/?srn=PES1&dept=CSE',
    method: 'GET'
}

var callback = function(response) {
    var body = '';
    response.on('data', function(data) {
        body += data;
    })
    .on('end', function() {
        console.log(body);
    });
}

var req = http.request(options, callback);

req.on('error', (err) => {

    console.error(err);
});

req.end();