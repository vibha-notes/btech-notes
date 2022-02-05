/* Sending parameters fromclient side */

/* Independently of node; build on top of, not replacement */
var express = require('express');
var MongoClient = require('mongodb').MongoClient;

var router = express.Router();

router.get('/', function(req, res) {
    res.send('Welcome to hello');
    MongoClient.collection('hello').find();
});

router.get('/:msg', function(req, res) {
    res.send('Hello, {}'.format(req.params.msg));
    MongoClient.collection('hello').findOne(req.query);
    // MongoClient.collection('hello').findOne({msgtype:req.params.msg});
});

/* Client will run this code */
router.post('/', function(req, res) {
    res.send('Message saved!');
    MongoClient.collection('hello').insert({});
});

router.put('/', function(req, res) {
    res.send('Message updated!');
    MongoClient.collection('hello').update({});
});

router.delete('/', function(req, res) {
    res.send('Message deleted!');
    MongoClient.collection('hello').delete({});
});

module.exports = router;