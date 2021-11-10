document.write('Demonstrating avascriptn while loop');
var i = 1
var msg = '';

//store 5 times tale in a variable 
while(i < 10){
	msg += i + ' x 5 = ' + (i * 5) + '<br />';
	i++;
}
document.getElementById('answer').innerHTML = msg;