/*
 * Guessing Game
 * 2019 Ben Tyler
*/

/* 1 */
void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0));
}

void loop() {
  Serial.println("Choose a number between 1 and 5");
  
/* 2 */
  int number = getRandom();
  while( !Serial.available() ) ;
  char rawGuess = Serial.read();
  int guess = analyzeInput(rawGuess); //see note 6
 
/* 3 */
  if ( (guess >= 1) && (guess <= 5) ) {
    Serial.println("You chose: " + String(guess));
  } else {
    Serial.println("Character not between 1 and 5");
    return;
  }

/* 4 */
  Serial.println("Arduino chose: " + String(number));
  if (number == guess) {
    Serial.println("You got it!"); 
  } else {
    Serial.println("Bad luck! Try again.");
  }
}

/* 5 */
int getRandom() {
  return random(1, 6);
} /* end */

/* 6 */
int analyzeInput(char input) {
  if(isAlpha(input)){
    Serial.println("Input is a letter");
    return -1;
  }
  if(isSpace(input)){
    Serial.println("Input is a space");
    return -1;
  }
  if(isDigit(input)){
    return String(input).toInt();
  }
  return -1;
}
