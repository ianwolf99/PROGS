var score = 75;
var msg;

if (score >= 50) {
	msg = 'Congratulations!';
	msg += 'Proceed to the next round.';
}

var el = document.getElementById('if_fuck');
el.textContent = msg;
