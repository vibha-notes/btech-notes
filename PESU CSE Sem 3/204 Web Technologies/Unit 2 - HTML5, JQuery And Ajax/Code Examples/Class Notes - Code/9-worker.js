this.onmessage = (event) => {
    console.log("Message received: " + event.data);
}

setInterval(function() {
    postMessage({"message": "Bye", "tstamp": new Date().getTime()});
})