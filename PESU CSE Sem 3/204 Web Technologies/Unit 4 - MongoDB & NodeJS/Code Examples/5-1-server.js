// http module creating a web server

var url = require('url')
var http = require('http');
var fs = require('fs');

http.createServer(function(request, response) {
    
    /* response.write('Welcome to my domain!');
    response.end(); */

    // Single response
    response.end('Welcome to my domain!');
}).listen(8080);

console.log('Server is up and running on http://localhost:8080');