var express = require('express');
var app = express();

/* Middleware Functions
request-response (life cycle of a request)

Parsing request
response header (compression)
*/

/* Multiple for same route */
app.use('/', function(req, res, next) {
    // task
    console.log('1. First MW function before route');
    next();
});

app.use('/', function(req, res, next) {
    // task
    console.log('2. Second MW function before route');
    next();
});

/* Route executed */
app.get('/', function(req, res) {
    res.send('Welcome to my page');
});

/* After route execution */
app.use('/', function(req, res, next) {
    // task
    console.log('3. First MW function after route');
    // next();
});

/* 
Route independent
app.use(function(req, res, next) {
    // task
    console.log('3. First MW function after route');
    // next();
}); */

app.listen(3000, function() {
    console.log('Server listening on port 3000')
});