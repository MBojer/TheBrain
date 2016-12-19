// Content in :
// Main Script
// Setup
// Loop

void Voltmeter(int Voltmeter_Array_Number) {

  Voltmeter_Using = analogRead(Voltmeter_Using_Pin);
  Voltmeter_Using = (Voltmeter_Using / 1024) * 5.0;
  Voltmeter_Using = Voltmeter_Using / 0.2;

} // End marker for Voltmeter
