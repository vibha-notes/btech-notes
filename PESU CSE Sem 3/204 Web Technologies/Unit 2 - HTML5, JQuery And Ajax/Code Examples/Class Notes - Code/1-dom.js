/* Interaction using DOM - DOcument Object Model

Document.write may not always work
1. Must be executed before page finishes loading, else will overwrite
2. Only appends to page, does not modify

DOM is an object representing the webpage with methods
1. getElementByID()
2. getElementByClassName()
3. getElementByTagName()
4. querySelector()
5. querySelectorAll()

Child, parent, sibling relationships (hierarchy/tree) of objects on page
body -> div -> {img, img, h1}

Create elements:
document.createElement()
document.createTextNode()

node.appendChild()
node.insertBefore()

document.body.children[0].innerHTML
vs 
document.body.children[0].innerText
*/

function init() {
    h1 = document.querySelector("h1");
    h1.style.color = "blue";

    list = document.querySelectorAll("li.g1");
    for (i=0; i<list.length; i++) {
        list[i].innerText = list[i].innerText.toUpperCase();
    }

    /* Add, remove, replace elements in dom */
    new_li = document.createElement('li');
    new_li.innerText = "Assassin's Creed";
    ul1 = document.querySelector('ul');
    /* Adds to end */
    // ul1.appendChild(new_li);

    /* Can use index */
    // ul1.insertBefore(new_li, list[0])

    /* Can also do  */
    ul1.insertBefore(new_li, ul1.firstChild);

    // list[0].remove();
    /* OR */
    // ul1.removeChild(ul1.children[2]);

    list[0].parentNode.replaceChild(new_li, ul1.children[2]);
}