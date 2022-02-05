/* 
Single threaded event loop
Concurrency using event and callbacks 
*/

var events = require('events');
var eventEmitter = new events.EventEmitter();

var handler = function() {
    console.log('Connection successful');
}

eventEmitter.on('connection', handler);
eventEmitter.on('received_data', function() {
    console.log('Received the data');
})
eventEmitter.on('hello', function() {
    console.log('hi');
})

// Fire the event
eventEmitter.emit('hello');
eventEmitter.emit('connection');
eventEmitter.emit('received_data');