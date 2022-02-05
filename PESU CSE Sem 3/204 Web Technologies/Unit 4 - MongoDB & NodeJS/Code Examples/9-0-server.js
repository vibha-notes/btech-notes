// http module creating a web server

var url = require('url')
var http = require('http');
var fs = require('fs');
var qs = require('querystring');

// Directly
// npm install mongodb
var MongoClient = require('mongodb').MongoClient;


http.createServer(function(request, response) {

    // url has path to file
    if (request.method == 'GET') {
        MongoClient.connect('mongodb://127.0.0.1:27017', {
            useUnifiedTopology: true
        }, function(err, client) {
            if (err) throw err;
            const db = client.db('newdb');


            db.collection('student').find({}).toArray(function (err, docs) {
                response.writeHead(200, {'Content-type': 'application/json'});
                
                response.write(JSON.stringify(docs));
                client.close();
                response.end();
            });
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
            // body += chunk;
            body.push(chunk);
            console.log(chunk.toString());
        })
        .on('end', () => {
            // Convert to buffer and then string
            body = Buffer.concat(body).toString();
            console.log(body);

            MongoClient.connect('mongodb://127.0.0.1:27017', {
                useUnifiedTopology: true
            }, function(err, client) {
                if (err) throw err;
                const db = client.db('newdb');

                db.collection('student').insertOne(JSON.parse(body), function (err, res) {
                    if (err) throw err;

                    response.writeHead(200, {'Content-type': 'text/plain'});
                    response.write('1 doc inserted');

                    // console.log('1 doc inserted');
                    client.close();
                    response.end();
                });
            })
            
        });
        // body -> string containing request message
    }
    
}).listen(8080);

console.log('Server is up and running on http://localhost:8080');