/* Variables:
    1. var
    2. let
    3. const

    Default (no specifier): global variables

    JS is loosely typed/dynamic
    Datatype decided based on value stored
    Operations performed based on value

    Primitive
    1. undefined
    2. null
    3. boolean
    4. string
    5. number

    Non-Primitive
    1. Object
    2. Aate
    3. Array

    Wrappers on primitive
    1. Number
    2. Boolean
    3. String

    Operators
    Note: === is for type and value, == is loose equality

    eg: 
    77 === 77; -> true
    77 == '77' -> true
*/

/* Text is treated as HTML */
document.write("<br/>Sup");

/* Var has global scope, multiple declarations allowed */
var x = 10;
if (true) {
    var x = 20;
}
console.log(x);

/* let has block scope -> better than var,
multiple declarations not allowed */
let y = 10;
if (true) {
    let y = 20;
}
console.log(y);

/* const has block scope */
const z = 10;
if (true) {
    const z = 20;
}
console.log(z);

/* Without specifiers - default is var (global) */
w = 10;
if (true) {
    w = 20;
}
console.log(w)

/* Variables */
let a = null;       // object (null)
let b;              // undefined
let c = true;       // boolean
let d = 10.22;      // number
let e = "ariana";   // string

/* Check type using typeof a; in console 

Implicit conversion:
1. c + d = 11.22 (true converted to 1)
2. c + e = trueariana (boolean converted to string)

Explicit conversion:
1. c.toString() (boolean object has a method called toString)

Note: browser will ignore \n, so use <br/> 
*/

/* Non-primitive type wrappers */
let D = Number("9.22");
let E = String("ariana");
let C = Boolean(true);

/* If one is a string, + is concat */
let num1 = "10.22" - 0;
let num2 = "10.22" + 0;

/* string to int/float */
let num3 = parseInt("10.22", 10);   // Stops at non-digit
let num4 = parseFloat("10.22^2");     // Entire number till non-digit/.

/* Associativity: left to right conversion */
console.log("string" + true + 1);
console.log("string" + 1 + true);
console.log(true + 1 + "string");

