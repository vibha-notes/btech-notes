/* Independently of node; build on top of, not replacement */
var express = require('express');
// var MongoClient = require('mongodb').MongoClient;
var bodyParser = require('body-parser');

var app = express();

// typically in main
// populates req.body with req message body or null
app.use(bodyParser.json()); 

app.get('/', function(req, res) {
    res.send('Welcome to my page');
});

var studentrouter = require('./3-2-student-router.js');
app.use('/student', studentrouter);

app.listen(3000, function() {
    console.log('Server listening on port 3000')
});