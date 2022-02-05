/* Method 1: Object literals: */

let lit_item = {name: "Reebok", price: "Rs. 2000", av_qty: 20};
let item1 = Object.create(lit_item);
console.log(item1);
let item2 = Object.create(lit_item, {name: {value: "Nike"}, price: {value: "Rs. 2500"}, desc: {value: 'Full desc'}});
console.log(item2);

/* Method 2: Object Constructor */
function item(name, price, av_qty) {
    this.name = name;
    this.price = price;
    this.av_qty = av_qty;
    this.show = function() {
        document.write(this.name + " " + this.price + " " + this.av_qty + "<br/>");
    }
}

function gc_item(name, price, av_qty, desc) {
    /* Call Item contructor all properties are added */
    /* Every function object has a call method */
    item.call(this, name, price, av_qty);
    this.desc = desc;
}

/* function.call demonstration

function add(a, b) {
    return a + b;
}

add(3, 5); -> add.call(window, 3, 5);

*/

/* With new */
let con_item = new gc_item('Reebok', 'Rs. 2000', 20, 'Full desc');


/*  */
gc_item.prototype = new item();
/* gc_item.prototype = Item.prototype; */
gc_item.prototype.constructor = gc_item;

con_item.show();

/* Can overwrite functions like
gc_item.prototype.show = function() {} 
DO THIS AFTER OVERWRITING PROTOTYPE
TODO: figure out
*/

/* ECMAScript 2015 (ES6) - class keyword */
class Item {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }

}