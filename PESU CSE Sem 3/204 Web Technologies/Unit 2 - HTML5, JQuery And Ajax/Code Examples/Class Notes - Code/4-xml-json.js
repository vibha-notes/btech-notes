/* 
Communication between client and server:

Formats
1. eXtensible Markup Language - XML
    - uses tags
    - derived from SGML
    - namespaces
    - no arrays
    - difficult to read
    - more secure
    - comments
    - end tag
    - supports various encodings
    
2. JavaScript Object Notation - JSON
    - uses brackets
    - JavaScript
    - no namespaces
    - arrays
    - easy to read
    - less secure
    - no comments
    - no end tag
    - only UTF-8 encoding
*/

var xmlText;

xmlText = "<bookstore>" + 
            "<book>" + 
                "<title>Everyday Italian</title>" +
                "<author>Giada Laurentiis</author>" +
                "<year>2005</year>" +
            "</book>" +
        "<bookstore>";

/* 
Convert to object hierarchy - pain in the butt
DOM parser
*/

var parser = new DOMParser();

/* Convert string to object hierarchy */
xmlDOM = parser.parseFromString(xmlText, "text/xml");
xmlTitle = xmlDOM.getElementsByTagName("title")[0];
xmlTitle.childNodes[0].nodeValue += " - Modified";

document.getElementById("xml-demo").innerText = xmlTitle.childNodes[0].nodeValue;

/* Convert object hierarchy to string - serializer for req/res */
var xmlTextSerializer = new XMLSerializer();
xmlString = xmlTextSerializer.serializeToString(xmlDOM);

console.log(xmlString);

/* JSON */
 
var jsonText;

jsonText = '{"name": "Thor Ragnarok", "cast": ["Chris Hemsworth", "Tom Hiddleston"]}';

var jsonObj = JSON.parse(jsonText);
document.querySelector("#json-demo-1").innerText = jsonObj.name;

console.log(jsonObj.cast)

jsonObj.year = 2017;
jsonObj.rating = 7.8;

var newJsonStr = JSON.stringify(jsonObj);
document.querySelector("#json-demo-2").innerText = newJsonStr;

// jsonObj.toString() -> can be sent to server