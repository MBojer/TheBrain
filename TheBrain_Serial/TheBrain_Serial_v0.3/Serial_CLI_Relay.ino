// Content in :
// Main Script
// Loop

void Serial_CLI_Relay(int Serial_CLI_Relay_Number, int Serial_CLI_Relay_Starting_Pin, int Serial_CLI_Relay_End_Pin) {

  if (Serial_CLI_Relay_Number + Serial_CLI_Relay_Begin_Pin - 1 > Serial_CLI_Relay_End_Pin) {
    Serial_Print("The relay number is grater then the number of avalible relay's", 1);
    Serial_Print("Total number of relay's is ", 1);
    Serial.println(Serial_CLI_Relay_Number);
    Serial.println(Serial_CLI_Relay_Number + Serial_CLI_Relay_Begin_Pin - 1);
    Serial.println(Serial_CLI_Relay_End_Pin);
    return;
  }

  Serial_CLI_Relay_Number = Serial_CLI_Relay_Number + Serial_CLI_Relay_Begin_Pin - 1;

  pinMode(Serial_CLI_Relay_Number, OUTPUT);

  Serial.print("Switching relay number ");
  Serial.print(Serial_CLI_Relay_Number - Serial_CLI_Relay_Begin_Pin + 1);

  if (digitalRead(Serial_CLI_Relay_Number) == 0) {
    Serial.println(" ON");
    digitalWrite(Serial_CLI_Relay_Number, 1);
  }

  else {
    Serial.println(" OFF");
    digitalWrite(Serial_CLI_Relay_Number, 0);
  }

}
