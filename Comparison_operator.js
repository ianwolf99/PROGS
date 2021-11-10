var pass = 50;
var score = 90;

//check if the user hasa passed

var hasPassed = score >= pass;

//write the message into the page

var el = document.getElementById('scores');
el.textContext = 'level passed: ' + hasPassed;