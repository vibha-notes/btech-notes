/* 
Disabling JS - makes it less interactive
Different for each browser

Window Object
1. Alert = alert(text)
2. Prompt = prompt(text, default (opt))
3. Confirm

BAD UI DESIGN - DO NOT USE POP UPS!!!
Users typically disable these popups
*/

/* 
Eg: 

var age = prompt("Enter age: ", 13); 
var status = conform("Are you over 18?");
alert("this is an alert");
*/

/* JavaScript Objects
1. Literals
2. Contructors
*/

/* Literals 

Disadvantage: not reusable; only one instance
*/
let lit_item = {name: "Reebok", price: "Rs. 2000", av_qty: 20};
// document.write(lit_item.name + " " + lit_item.price + "<br/>");

/* Can define a show method */
lit_item.show = function() {
    document.write(lit_item.name + " " + lit_item.price + " " + lit_item.av_qty + "<br/>");
}
lit_item.show();

/* Constructor function - no need to return this (new takes care) */
function Item(name, price, av_qty) {
    this.name = name;
    this.price = price;
    this.av_qty = av_qty;
    this.show = function() {
        document.write(this.name + " " + this.price + " " + this.av_qty + "<br/>");
    }
}

/* With new */
let con_item = new Item('Reebok', 'Rs. 2000', 20);
con_item.show();

/* Wihtout new -> 'this' refers to global window object
and con_item would be undefined */


/* Prototype of object constructor */
function ProtItem(name, price, av_qty) {
    this.name = name;
    this.price = price;
    this.av_qty = av_qty;

}

/* Prototyped function */
ProtItem.prototype.show = function() {
    document.write(this.name + " " + this.price + " " + this.av_qty + "<br/>");
}

let prot_item = new ProtItem('Reebok', 'Rs. 2000', 20);
prot_item.show();


/* .prototype -> object within the object that has the structure */

/* Pass by value/reference */


class ClassItem {
    constructor(name, price, av_qty) {
        this.name = name;
        this.price = price;
        this.av_qty = av_qty;
    }
    show() {
        document.write(this.name + " " + this.price + " " + this.av_qty + "<br/>");
    }
}

let class_item = new ClassItem('Reebok', 'Rs. 2000', 20);
class_item.show();