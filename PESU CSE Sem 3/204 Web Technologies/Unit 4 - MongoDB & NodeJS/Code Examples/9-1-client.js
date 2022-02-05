var http = require('http');

// GET request
var options = {
    host: 'localhost',
    port: '8080', 
    path: '/9-2-sample.json',
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