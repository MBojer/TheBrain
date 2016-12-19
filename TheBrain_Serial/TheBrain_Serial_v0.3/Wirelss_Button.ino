// Content in :
// Main Script
// Setup
// Loop

void Wirelss_Button(void) {

  int Tick_Counter;
  int Tick_Counter_Delay = 50;
  int Tick_Counter_Trigger = 3;
  int Delay_After_Press = 1500;  
  bool Bilge_On = 0;
  
  while (digitalRead(Wireless_Button_A) == HIGH) {
    Tick_Counter ++;
    delay(Tick_Counter_Delay);
    if (Tick_Counter > Tick_Counter_Trigger) {
      Serial_CLI_Relay(3, Serial_CLI_Relay_Begin_Pin, Serial_CLI_Relay_End_Pin);
      delay(Delay_After_Press);
      return;
    }
  }

  while (digitalRead(Wireless_Button_B) == HIGH) {
    Tick_Counter ++;
    delay(Tick_Counter_Delay);
    if (Tick_Counter > Tick_Counter_Trigger) {
      Serial_CLI_Relay(2, Serial_CLI_Relay_Begin_Pin, Serial_CLI_Relay_End_Pin);
      delay(Delay_After_Press);
      return;
    }
  }

  while (digitalRead(Wireless_Button_C) == HIGH) {
    Bilge_On = 1;
    pinMode(27, OUTPUT);
    digitalWrite(27, 1);
  }

  if (Bilge_On == 1 && digitalRead(Wireless_Button_C) == LOW) {
    pinMode(27, OUTPUT);
    digitalWrite(27, 0);
    return;
  }

  while (digitalRead(Wireless_Button_D) == HIGH) {
    Tick_Counter ++;
    delay(Tick_Counter_Delay);
    if (Tick_Counter > Tick_Counter_Trigger) {
      Serial_CLI_Relay(8, Serial_CLI_Relay_Begin_Pin, Serial_CLI_Relay_End_Pin);
      delay(Delay_After_Press);
      return;
    }
  }



} // End of Wirelss_Button

