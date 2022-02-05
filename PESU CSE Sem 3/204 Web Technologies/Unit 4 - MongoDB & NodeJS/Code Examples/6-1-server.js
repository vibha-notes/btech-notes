// http module creating a web server

var url = require('url')
var http = require('http');
var fs = require('fs');
var qs = require('querystring');

http.createServer(function(request, response) {

    // url has path to file
    if (request.method == 'GET') {
        // console.log(request);


        response.writeHead(200, {'Content-type': 'text/plain'});
        var myurl = url.parse(request.url);
        var pathname = myurl.pathname;  // includes '/' at the begining

        if (pathname == '/') {
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
                
                // JSON Format
                var obj = JSON.parse(data);

                var students = obj.students;

                console.log(students);

                // response.write(obj.srn);
                var query = myurl.query;    // ?srn=PES1&...
                var qobj = qs.parse(query);
                
                students.forEach(element => {
                    if (element.srn == qobj.srn) {
                        response.write('<h1>' + element.name + ' ' + element.srn + '</h1>');
                    }
                });

                /* if (obj.srn === qobj.srn) { // {"srn": "PES1"}
                    response.write('<h1>' + obj.name + '</h1>');
                }    */
                response.end();
            }
        })
        
    }   
}).listen(8080);

console.log('Server is up and running on http://localhost:8080');