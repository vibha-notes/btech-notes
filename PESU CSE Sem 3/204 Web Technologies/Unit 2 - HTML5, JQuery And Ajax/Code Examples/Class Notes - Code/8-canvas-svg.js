/* 
Canvas - 2D graphics
SVG - vector graphics

Check out svg-wow.org

*/
function init() {
    c1 = document.querySelector("#c1");
    s1 = document.querySelector("#s1");

    /* Context object for 2D animation */
    ctx = c1.getContext("2d");

    ctx.fillStyle = "#FF0000";
    ctx.arc(100, 100, 80, 0, 2*Math.PI, 1);

    // ctx.stroke();
    ctx.fill();
}

function change() {
    s1.children[0].cx.baseVal.value += sign*20;
    s1.children[0].cy.baseVal.value += sign*10;

    if (s1.children[0].cx.baseVal.value<0 || s1.children[0].cx.baseVal.value>800) {
        // oops
    }

}