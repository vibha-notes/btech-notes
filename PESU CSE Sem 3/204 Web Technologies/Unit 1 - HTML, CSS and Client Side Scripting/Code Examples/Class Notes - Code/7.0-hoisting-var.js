/* Only declarations are hoisted, not 
their initialisations */

/* Hoisting of function */
var x = fn();
function fn() {
    return 10;
}
console.log(x);

// ref();
/* TypeError: ref is not a function. 
(In 'ref()', 'ref' is undefined) */

/* Only var ref is moved to the top of the script */
var ref = function() {
    return 10;
}

/* Hoisting of variables */
y = 10;
var y = 20;
console.log(y)

var c = w + 10;
console.log('c is ', c)
var w = 20;
console.log(c)