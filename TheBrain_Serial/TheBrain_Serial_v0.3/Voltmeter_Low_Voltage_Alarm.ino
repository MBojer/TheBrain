// Content in :
// Main Script
// Setup
// Loop

void Voltmeter_Low_Voltage(void) {

  Serial_Print(String(Voltmeter_Using), 1);


  if (Voltmeter_Using <= Voltage_Low_Alarm_Trigger && Voltmeter_Using >= Voltage_Low_Alarm_Stop) {
    Buzzer(200,2);
  }

  
} //End marker for Voltmeter Low Voltage Alarm

