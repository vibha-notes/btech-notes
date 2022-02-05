var http = require('http');

// GET request
var options = {
    host: 'localhost',
    port: '8080', 
    path: '/7-1-sample.txt',
}

var callback = function(response) {
    var body = '';
    response
    .on('data', function(data) {
        body += data;
    })
    .on('end', function() {
        console.log(body);
    })
}

var req = http.request(options, callback);
req.end();