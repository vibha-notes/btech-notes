/* new keyword for object */

var x = new Object();
x.name = 'Harry';
x.age = 20;

document.write('<br/>');

for (i in x)
    document.write(i + '->' + x[i] + '<br/>');


/* typeof these: object */
let num = new Number('111');
let str = new String('10 days');
let bool = new Boolean('true');

// (yyyy, mm, hh, min, sec), month 0 to 11;
let dt = new Date(2010, 10, 20);

/* Without new - converts to num/string/boolean */
let num_no_new = Number('111');
let str_no_new = String('10 days');
let bool_no_new = Boolean('true');


/* Arrays

Using constructor
1. One parameter
2. Two parameters

100 undefined elements
let arr = new Array(100);

{10, 20}
let arr = new Array(10, 20); 

{1, 2, 3}
let arr = [1, 2, 3];


Can set length
arr.length = 8; (remaining undefined)


for (i in arr)
    console.log(typeof i + i);

Output: (indices stored as strings)
string 0
string 1
*/

let arr1 = new Array(10);
let arr2 = new Array(10, 20, 30);
let arr3 = [1, 2, 3, 'string', true, new Number];

/* Functions

Define a function

function func([...]) {
    return [...];
}
function func(...args) {}

*/

function add(a, b) {
    return a+b;
}

let sum = add(5, 8);
console.log(sum);

/* Referencing a function */
var ref = add;
console.log(ref(5, 8));


/* Anonymous function with names */
var ref = function(a, b) {
    return a+b;
}
console.log(ref(5, 8));

/* Parameter-arguments mismatch */
console.log(ref(5, 8, 10, 20));     // 10, 20 not accessible by function
console.log(ref(5));                // b in undefined - NaN

/* Default values */
var ref = function(a, b=0) {
    return a+b;
}
console.log(ref(5));

/* Aruguments object */
var ref = function() {
    console.log('arguments ' + arguments);
    s = 0;
    for (var i in arguments) {
        // console.log(i, typeof i);
        s = s + arguments[i];
    }
    return s;
}
console.log('sum = ' + ref(5, 8, 10, 20)); 


/* Variable args */
var ref = function(...args) {
    console.log('args ' + args);
    s = 0;
    for (var i in args) {
        // console.log(i, typeof i);
        s = s + args[i];
    }
        
    return s;
}
console.log('sum = ' + ref(5, 8, 10, 20));