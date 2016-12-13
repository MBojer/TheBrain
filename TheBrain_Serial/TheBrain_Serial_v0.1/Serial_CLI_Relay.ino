void Serial_CLI_Relay(int Serial_CLI_Relay_Number, int Serial_CLI_Relay_Starting_Pin, int Serial_CLI_Relay_End_Pin) {

  if (Serial_CLI_Relay_Number + Serial_CLI_Relay_Begin_Pin > Serial_CLI_Relay_End_Pin) {
    Serial.println("The relay number is grater then the number of avalible relay's");
    Serial.print("Total number of relay's is ");
    Serial.println(Serial_CLI_Relay_End_Pin);
    return;    
    }

  Serial.println(digitalRead(Serial_CLI_Relay_Number));

  if (digitalRead(Serial_CLI_Relay_Number) == 0) {
    Serial.print("Switching relay number ");
    Serial.print(Serial_CLI_Relay_Number);
    Serial.println(" ON");
    digitalWrite(Serial_CLI_Relay_Number, 1);
    }

  else {
    Serial.print("Switching relay number ");
    Serial.print(Serial_CLI_Relay_Number);
    Serial.println(" OFF");
    digitalWrite(Serial_CLI_Relay_Number, 0);
    }
 
}
