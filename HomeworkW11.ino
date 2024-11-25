const int ledPins[] = {7, 8, 9, 10, 11, 12}; // LED pins

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT); 
    digitalWrite(ledPins[i], LOW); 
  }
}

void loop() {
  unsigned long currentMillis = millis();
  int elapsedSeconds = (currentMillis / 1000) % 40; // calculate elapsed seconds 

  
  for (int i = 0; i < 6; i++) {
    if ((elapsedSeconds >= 10 && elapsedSeconds < 20 && i == 1) ||          // D7 lit at 10-19 seconds
        (elapsedSeconds >= 20 && elapsedSeconds < 30 && (i == 2 || i == 3)) || // D8 and D9 lit at 20-29 seconds
        (elapsedSeconds >= 30 && elapsedSeconds < 40 && (i == 4 || i == 5 || i == 6))) { // D10, D11, and D12 lit at 30-39 seconds
      digitalWrite(ledPins[i], HIGH); // Turn on the LED
    } else {
      digitalWrite(ledPins[i], LOW); // Turn off the LED
    }
  }

  delay(100); 
}
