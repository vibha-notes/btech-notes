/*

Built-in Objects:
1. Number
2. String
3. Array
4. Date (since 1/1/1970)
5. Math
6. Window (document object)

Refer notes for details on methods
*/

/* Some Methods */

/* Sort */

/* Sorts like strings */
var arr = [1, 11, 22, 2, 34, 5]
console.log(arr.sort())

/* To sort numbers */
function asc(a, b) {
    // > symbol converts to numberd
    if (a>b) return 1;
    if (a<b) return -1;
    else return 0;
}
console.log(arr.sort(asc))

/* Simplified */
function asc_simple(a, b) {
    return (a - b);
}
console.log(arr.sort(asc_simple))

/* Descending */
function desc(a, b) {
    return (b - a);
}


/* Math.random() returns value b/w 0 and 1 */

/* For numbers between a and b */
// var ran_num = a + Math.floor((Math.random()*(b-a)));

function random_interval(a, b) {
    return (a+Math.floor(Math.random()*(b-a)));
}

console.log(random_interval(1, 100));


/* Time intervals */

/* 
Execute once after time interval, non-blocking
var t = setTimeout(func_ref, time_in_ms);
clearTimeout(t);

Execute repeatedly after time al
var t = setal(func_ref, time_in, ms);
clearal(t); 
*/

// Executes only once
let count = 0;
function log() {
    console.log(count);
    count++;
    if (count == 5) {
        clearTimeout(old_t);
        console.log(11);
    }
        
}

var old_t = setTimeout(log, 2000);
// clearTimeout(old_t);


// Executes multiple times
let new_count = 0;
var t = setInterval(function() {
    console.log(new_count);
    new_count++;
    if (new_count == 5) {
        clearInterval(t);
        console.log(11);
    }
}, 1000)

/* String substr() returns new string, does not modify */
let str = "This is a string"
let sub = str.substr(10, 6);

var arr = str.split(' ');

let new_str = arr.join(' ');
