/* 
Events - created by activities associated with HTML elements


Event listeners and event handlers
element.on<event> = handler;

Eg:
div.addEvevntListener("click", change);


Events:
1. Mouse-based
2. Keyboard-based
3. Form-based

Event objects: context/details of event

Can add multiple handlers for a listener
*/

function init() {
    list = document.querySelectorAll("li");

    for (let i in list) {
        list[i].onclick = handler;
    }

    document.querySelector("p").addEventListener("click", function(event) {
        event.target.innerHTML = "I was clicked";
    })
    document.querySelector("p").onclick = function(event) {
        event.target.style.color = 'red';
        console.log('sup')
    }
    
    console.log(document.body.children[0].children[0].onclick);
}

function handler(event) {
    // For when parameters are not passed - depends on browser
    ev = event || window.event;
    // targ = event.target | event.srcElement; ???
    console.log(ev.target.innerHTML);
    ev.target.style.color = "blue";
    ev.preventDefault();
}

