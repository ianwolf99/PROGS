var subtotal = (13 + 1) * 5; //subtotal is 70
var shipping = 0.5 * (13 + 1); //shipping is 7

var total = subtotal + shipping; //total is 77

var elsub = document.getElementById('subtotal');
elsub.textContext = subtotal;

var elship = document.getElementById('shipping');
elship.textContext = shipping;

var elTotal = document.getElementById('total');
elTotal.textContext = total;