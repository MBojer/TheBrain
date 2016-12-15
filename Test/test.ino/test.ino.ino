#define Wireless_Button_A 2
// LED_BUILTIN

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
                   // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW

  pinMode(Wireless_Button_A, INPUT);

}

void loop() {

  if (digitalRead(Wireless_Button_A) == HIGH) digitalWrite(LED_BUILTIN, HIGH);
  
  else digitalWrite(LED_BUILTIN, LOW);


  delay(100);

}
