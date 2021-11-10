/* the script displays time according to current time */

var today = new Date();
var hourNow = today.getHours();
var greetings;

if (hourNow > 18) {
	greetings = 'Good Evening!';
}else if (hourNow > 12) {
	greetings = 'Good afternoon';
}else if (hourNow > 0) {
	greetings = 'Good Morning';
}else{
	greetings = 'Welcome!'
}

document.write('<h3>' + greetings + '</h3>');