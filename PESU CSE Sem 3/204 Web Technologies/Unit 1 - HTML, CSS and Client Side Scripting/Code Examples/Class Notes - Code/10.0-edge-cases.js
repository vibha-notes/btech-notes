/* 
1. Deleting elements from an array
2. Date arithmatic */

let dt = new Date();
console.log('date: ', dt);

console.log('date: ', dt.getDate());

dt.setDate(dt.getDate() + 1);
console.log(dt.getDate());

// setTime() in ms


/* Array */
ar = Array(1, 2, 3, 4, 5);
delete arr[2]; // makes it undefined

// better to splice
arr.splice(2, 1); // add elements -> replace

/* unix epoch time 1 jan 1970 */

/* push, shift, unshift */