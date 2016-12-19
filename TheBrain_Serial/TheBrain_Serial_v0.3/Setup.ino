void setup() {

  //  pinMode(24, OUTPUT); // main lights
  //  digitalWrite(24, HIGH);
  pinMode(25, OUTPUT);
  digitalWrite(25, HIGH);

  // --------------------------------------------- Wireless Button's ---------------------------------------------

  pinMode(Wireless_Button_A, INPUT);
  pinMode(Wireless_Button_B, INPUT);
  pinMode(Wireless_Button_C, INPUT);
  pinMode(Wireless_Button_D, INPUT);


  // --------------------------------------------- Buzzer ---------------------------------------------

  pinMode(Buzzer_Pin, OUTPUT);

  Buzzer(75, 1);


  // --------------------------------------------- Serial ---------------------------------------------

  Serial.begin(115200);

  Serial.println();
  Serial.println("Boot done");
  Serial.println();
  Serial.print("Software Version: ");
  Serial.println(Software_Version);


  // --------------------------------------------- Voltmeter ---------------------------------------------

  pinMode (Voltmeter_Using_Pin, INPUT);

} // End marker for Setup
