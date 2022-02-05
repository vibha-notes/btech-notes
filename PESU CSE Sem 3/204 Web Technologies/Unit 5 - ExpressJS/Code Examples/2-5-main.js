/* Independently of node; build on top of, not replacement */
var express = require('express');
var MongoClient = require('mongodb').MongoClient;


var app = express();

app.get('/', function(req, res) {
    res.send('Welcome to my page');
});

var hellorouter = require('./2-4-hellorouter.js');
app.use('/hello', hellorouter);

app.listen(3000, function() {
    console.log('Server listening on port 3000')
});