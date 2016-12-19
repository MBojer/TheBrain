// Content in :
// Main Script

void Serial_Print(String Serial_Print_Input, bool Serial_Print_New_Line) {

  String CLI_Prifix = "TheBrain#: ";

  String temp = Serial_Print_Input;

  Serial.print(CLI_Prifix);

  if (Serial_Print_New_Line == 1) Serial.println(temp);
  
  else Serial.print(temp);
}

