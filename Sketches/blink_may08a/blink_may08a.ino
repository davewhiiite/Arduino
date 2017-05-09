unsigned char ledInt = 13;
unsigned char ledExt = 12;


unsigned int sqr = 0;
unsigned int blinker = 0;
unsigned int n_blinker = 1;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  //pinMode(ledInt, OUTPUT);
  pinMode(ledExt, OUTPUT);

    // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
}
 
// the loop function runs over and over again forever
void loop() {

  for(int i = 0; i < 100; i++){
    sqr = i*i;
   // Serial.println(sqr);
    delay(250); 
    blinker ^= 1;
    n_blinker ^= 1;
    digitalWrite(ledExt, blinker);
    digitalWrite(ledInt, n_blinker);
  }
    
}
  
  /* digitalWrite(ledExt, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledInt, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(ledExt, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(ledInt, HIGH);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
  */


