

/* see it in action https://youtu.be/-KF56CQGpJU */
void setup() {
  // initialize digital pin 13 as an output. MOSFET gate is also connected to pin 13.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  for(int i=0; i< 10; i++){ 
    digitalWrite(13, HIGH);   
    delay(5);              
    digitalWrite(13, LOW);    
    delay(5);              
  }

  delay(1000);
}
