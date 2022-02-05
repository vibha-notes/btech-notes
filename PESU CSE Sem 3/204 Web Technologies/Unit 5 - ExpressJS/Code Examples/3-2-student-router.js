var express = require('express');
var MongoClient = require('mongodb').MongoClient;

var router = express.Router();

router.get('/', function(req, res) {
    MongoClient.connect('mongodb://127.0.0.1:27017', {
        useUnifiedTopology: true
    }, function(err, client) {
        if (err) throw err;

        const db = client.db('newdb');
        db.collection('student').find(req.query).toArray(function (err, objs) {
            if (err) throw err;
            res.send(objs);
        });
    });
});

router.get('/:srn', function(req, res) {
    MongoClient.connect('mongodb://127.0.0.1:27017', {
        useUnifiedTopology: true
    }, function(err, client) {
        if (err) throw err;

        const db = client.db('newdb');
        db.collection('student').findOne({srn: req.params.srn}, function (err, objs) {
            if (err) throw err;
            res.send(objs);
        });
    });
});

router.post('/', function(req, res) {
    MongoClient.connect('mongodb://127.0.0.1:27017', {
        useUnifiedTopology: true
    }, function(err, client) {
        if (err) throw err;

        const db = client.db('newdb');
        db.collection('student').insertOne(req.body, function (err, objs) {
            if (err) throw err;
            res.send("Save successful");
        });
    });
});

router.put('/:srn', function(req, res) {
    MongoClient.connect('mongodb://127.0.0.1:27017', {
        useUnifiedTopology: true
    }, function(err, client) {
        if (err) throw err;

        const db = client.db('newdb');
        db.collection('student').updateOne({srn: req.params.srn}, req.body, function (err, objs) {
            if (err) throw err;
            res.send("Update successful");
        });
    });
});

router.delete('/:srn', function(req, res) {
    MongoClient.connect('mongodb://127.0.0.1:27017', {
        useUnifiedTopology: true
    }, function(err, client) {
        if (err) throw err;

        const db = client.db('newdb');
        db.collection('student').deleteOne({srn: req.params.srn}, function (err, objs) {
            if (err) throw err;
            res.send("Delete successful");
        });
    });
});

module.exports = router;