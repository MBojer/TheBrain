// Content in :
// Main Script

void Serial_Print(String Serial_Print_Input, bool Serial_Print_New_Line) {

  String CLI_Prifix = "TheBrain # ";

  if (Serial_Print_New_Line == 1) {
    Serial.print(CLI_Prifix);
    Serial.println(Serial_Print_Input);
  }

  else {
    Serial.print(CLI_Prifix);
    Serial.print(Serial_Print_Input);
  }

}

