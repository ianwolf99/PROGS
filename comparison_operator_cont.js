var score1 = 90;
var score2 = 95;
var highscore1 = 75;
var highscore2 = 95;

//check if the score is higher scores
var comparison = (score1 + score2) > (highscore1 + highscore2);

//write the message into the page
var el = document.getElementsByTagName('highscore');
el.textContext = 'New highscore: ' + comparison;
