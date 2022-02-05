// http module creating a web server

var url = require('url')
var http = require('http');
var fs = require('fs');

http.createServer(function(request, response) {

    // url has path to file
    if (request.method == 'GET') {
        // console.log(request);


        response.writeHead(200, {'Content-type': 'text/plain'});
        var myurl = url.parse(request.url);
        var pathname = myurl.pathname;  // includes '/' at the begining

        if (pathname == '/') {
            // Crude method

            /* response.writeHead(200, {'Content-type': 'text/html'});
            response.write('<h1>Welcome to my web app!</h1>');
            response.end(); */

            pathname = '/5-4-index.html'
        }

        fs.readFile(pathname.substr(1), function(err, data) {
            if (err) {
                response.writeHead(404, {'Content-type': 'text/html'});
                response.write('<h1>File not found</h1>');
                response.end();
            }
            else {
                response.writeHead(200, {'Content-type': 'text/html'});
                response.write(data);
                response.end();
            }
        })
        
    }   
}).listen(8080);

console.log('Server is up and running on http://localhost:8080');