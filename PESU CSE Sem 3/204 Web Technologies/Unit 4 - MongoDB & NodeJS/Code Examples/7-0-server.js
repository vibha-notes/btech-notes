// http module creating a web server

var url = require('url')
var http = require('http');
var fs = require('fs');
var qs = require('querystring');

http.createServer(function(request, response) {

    // url has path to file
    if (request.method == 'GET') {
        // console.log(request);


        // response.writeHead(200, {'Content-type': 'text/plain'});
        var myurl = url.parse(request.url);
        var pathname = myurl.pathname;  // includes '/' at the begining

        if (pathname == '/') {
            pathname = '/5-4-index.html'
        }

        fs.readFile(pathname.substr(1), 'utf-8', function(err, data) {
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
    
    // request is a stream
    // Need a client to call post request
    if (request.method == 'POST') {

        // response.writeHead(200, {'Content-type': 'text/plain'});
        var myurl = url.parse(request.url);
        var pathname = myurl.pathname;  // includes '/' at the begining

        // stream buffer 
        let body = [];

        request
        .on('data', (chunk) => {
            body.push(chunk);
            console.log(chunk.toString());
        })
        .on('end', () => {
            // Convert to buffer and then string
            body = Buffer.concat(body).toString();
            // console.log(body);
            fs.appendFile(pathname.substr(1), body+'\n', (err, res) => {
                response.writeHead(200, {'Content-type': 'text/plain'});
                // response.write('HELLO');
                response.end("Message saved");
            })
        });
        // body -> string containing request message
    }
    
}).listen(8080);

console.log('Server is up and running on http://localhost:8080');