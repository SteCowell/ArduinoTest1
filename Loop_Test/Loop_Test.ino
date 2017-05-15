/* Understanding Loops 
   Basic code 
   OK, I've added a new comment for testing */

void setup() {
  Serial.begin (9600);
}

void loop(void) {
  char s[2] = " ";
  uint8_t x, y;
  for( y = 0; y < 6; y++ ) {
    for( x = 0; x < 16; x++ ) {
      s[0] = y*16 + x + 32;
      Serial.println (x);
        delay(500);
      Serial.println (y);
        delay(500);
      Serial.println (s);
        delay(500);
      Serial.println ("--------------------" + y );
    }
  }
  delay(3000);
}



