// Content in :
// Main Script
// Setup

void Buzzer(unsigned char Buzzer_Delay_ms, int Buzzer_Count) {

  while (Buzzer_Count > 0) {
    analogWrite(Buzzer_Pin, 20); //Setting pin to high
    delay(Buzzer_Delay_ms);
    
    analogWrite(Buzzer_Pin , 0); //Setting pin to LOW
    delay(Buzzer_Delay_ms);

    Buzzer_Count --;
  }
  
} // End marker for Buzzer

