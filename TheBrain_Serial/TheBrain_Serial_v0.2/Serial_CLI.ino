void Serial_CLI(void) {

while (Serial.available()) {
  delay(3);
  char c = Serial.read();
  Serial_CLI_Input += c;
  }

Serial_CLI_Input.trim();

if (Serial_CLI_Input.length() > 0) {

  Serial.println(Serial_CLI_Input);

// --------------------------------------------- Serial CLI Relay ---------------------------------------------

if (Serial_CLI_Input.substring(0, 5) == "relay") {
  
  Serial_CLI_Input.remove(0, 6);

Serial_CLI_Relay(Serial_CLI_Input.toInt(), Serial_CLI_Relay_Begin_Pin, Serial_CLI_Relay_End_Pin);
  }


Serial_CLI_Input = "";
Serial.flush();

}
}
