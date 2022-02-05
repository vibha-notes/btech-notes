/* Buffer concat */
/* EventEmitter */

const buf1 = Buffer.alloc(11, 'hi, welcome');
const buf2 = Buffer.alloc(18, ' to pes university');

console.log(buf1.toString());
console.log(buf2.toString());

const totallength = buf1.length + buf2.length;

console.log(totallength);

/* Array of buffers */
const buf3 = Buffer.concat([buf1, buf2], totallength);

/* default utf8 */
console.log(buf3.toString());

console.log(buf3.length);

