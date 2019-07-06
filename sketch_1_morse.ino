/*
Morse Code Blinker
2019 Ben Tyler
*/

/* 1 */
#define DOT (200)		// delay for dot in milliseconds
#define DASH (3 * DOT)	// delay for dash
#define SPACE (DOT + 1)	//delay after each dot or dash, see note 6
#define LSPACE (4 * SPACE) // delay for space between letters
#define WSPACE (7 * SPACE)// delay for space between words
  
const int morse[] = {DOT, SPACE, DOT, SPACE, DOT, SPACE, DOT, LSPACE, DOT, LSPACE, DOT, SPACE, DASH, SPACE, DOT, SPACE, DOT, LSPACE, DOT, SPACE, DASH, SPACE, DOT, SPACE, DOT, LSPACE, DASH, SPACE, DASH, SPACE, DASH, WSPACE, DOT, SPACE, DASH, SPACE, DASH, LSPACE, DASH, SPACE, DASH, SPACE, DASH, LSPACE, DOT, SPACE, DASH, SPACE, DOT, LSPACE, DOT, SPACE, DASH, SPACE, DOT, SPACE, DOT, LSPACE, DASH, SPACE, DOT, SPACE, DOT, WSPACE}; // HELLO_WORLD_

const int length = sizeof(morse)/sizeof(morse[0]);

/* 2 */
int i = 0;

/* 3 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     
  Serial.begin(9600);               
  Serial.println("HELLO WORLD in Morse code!");
}

/* 4 */
void loop() {
  if (morse[i] == DOT || morse[i] == DASH) {
       digitalWrite(LED_BUILTIN, HIGH);
  } else {
       digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(morse[i]);
  
/* 5 */
  i++;
  if (i == length) {                
    i = 0;
    Serial.println("flashing HELLO WORLD again");
  }
} /* end */
