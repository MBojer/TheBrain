void Serial_CLI(void) {

  while (Serial.available()) {
    delay(3);
    char c = Serial.read();
    Serial_CLI_Input += c;
  }

  Serial_CLI_Input.trim();

  if (Serial_CLI_Input.length() > 0) {

    Serial_Print(Serial_CLI_Input, 1);

    // --------------------------------------------- Serial CLI Relay ---------------------------------------------

    if (Serial_CLI_Input.substring(0, 5) == "relay") {

      Serial_CLI_Input.remove(0, 6);

      Serial_CLI_Relay(Serial_CLI_Input.toInt(), Serial_CLI_Relay_Begin_Pin, Serial_CLI_Relay_End_Pin);
    }

    // --------------------------------------------- Help ---------------------------------------------

    else if (Serial_CLI_Input == "help") {

      Serial_Print("", 1);
      Serial_Print("###########################################", 1);
      Serial_Print("", 1);
      Serial_Print("Avalible commands:", 1);
      Serial_Print("", 1);
      Serial_Print("relay 1 = Switching state of Relay 1", 1);
      Serial_Print("relay 2 = Switching state of Relay 2", 1);
      Serial_Print("relay 3 = Switching state of Relay 3", 1);
      Serial_Print("relay 4 = Switching state of Relay 4", 1);
      Serial_Print("relay 5 = Switching state of Relay 5", 1);
      Serial_Print("relay 6 = Switching state of Relay 6", 1);
      Serial_Print("relay 7 = Switching state of Relay 7", 1);
      Serial_Print("relay 8 = Switching state of Relay 8", 1);
      Serial_Print("", 1);
      Serial_Print("Help = Take a wild guess :-D", 1);
      Serial_Print("", 1);
      Serial_Print("###########################################", 1);
      Serial_Print("", 1);
    }


    // --------------------------------------------- Command not recognized ---------------------------------------------

    else Serial_Print("Command not recognized try typing help", 1);


    Serial_CLI_Input = "";
    Serial.flush();

  }
}
