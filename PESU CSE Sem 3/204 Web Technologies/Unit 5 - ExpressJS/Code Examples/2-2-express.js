/* Independently of node; build on top of, not replacement */
var express = require('express');
var MongoClient = require('mongodb').MongoClient;


var app = express();

app.get('/', function(req, res) {
    res.send('Welcome to my page');
});

app.get('/hello', function(req, res) {
    res.send('Welcome to my page');
    MongoClient.collection('hello').find();
});

app.get('/hello/:msg', function(req, res) {
    res.send('There');
    MongoClient.collection('hello').findOne({msgtype:req.params.msg});
});

/* Client will run this code */
app.post('/hello', function(req, res) {
    res.send('Message saved!');
    MongoClient.collection('hello').insert({});
});

app.put('/hello', function(req, res) {
    res.send('Message updated!');
    MongoClient.collection('hello').update({});
});

app.delete('/hello', function(req, res) {
    res.send('Message deleted!');
    MongoClient.collection('hello').delete({});
});


app.listen(3000, function() {
    console.log('Server listening on port 3000')
});