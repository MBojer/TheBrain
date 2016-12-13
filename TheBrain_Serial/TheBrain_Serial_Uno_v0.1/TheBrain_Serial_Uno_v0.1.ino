
/*
  Bojer was here

  The Vrain Serial CLI - Version "See blow"
*/

float Software_Version = 0.1;

#include <DS3231.h>

DS3231 rtc(SDA, SCL);

// ############### Analog pins ###############

//--------------- Serial ---------------

String Serial_Command;

void setup(void) {
  Serial.begin(115200);
  
  
  
    rtc.begin();




  Serial.println("Boot done;");
  Serial.println();
  Serial.print("Software_Version: ");
  Serial.println(Software_Version, 1);
  Serial.println();
}


void loop(void) {












// ########################################## Serial - CLI #########################################################################

  while (Serial.available()) {
    delay(3);
    char c = Serial.read();
    Serial_Command += c;
  }

  Serial_Command.trim();

  if (Serial_Command.length() > 0) {

    Serial.println();
    Serial.println(Serial_Command);
    Serial.println();




// ############### Versio ###############

    if (Serial_Command == "version") {
      Serial.print("Running TheBrain Software Version ");
      Serial.print(Software_Version);
      Serial.println();
    }

    

// ######################### Clock #####################

   else if (Serial_Command == "clock") {
  
  Serial.print(rtc.getDOWStr()); // Send day of the week
  Serial.print(" ");
  
  Serial.print(rtc.getDateStr()); // Send date
  Serial.print(" ");

  Serial.println(rtc.getTimeStr()); // Send time
  Serial.println();
  }
  
// ######################### Clock - time #####################

 else if (Serial_Command.substring(0, 10) == "clock time") {
 
  String Hour;
  String Minute;
  String Secound;
    
  Hour = Serial_Command.substring(11, 13);
  Minute = Serial_Command.substring(14, 16);
  Secound = Serial_Command.substring(17, 19);

  rtc.setTime(Hour.toInt(), Minute.toInt(), Secound.toInt());     // Set the time to 12:00:00 (24hr format)
  
  Serial.print("Time set to: ");
  Serial.println(rtc.getTimeStr()); // Send time  
  Serial.println();
  }
  
    
// ######################### Clock - dow #####################

 else if (Serial_Command == "clock dow monday") {  
  rtc.setDOW(MONDAY);
  Serial.print("Day of week set to: ");
  
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow tuesday") {  
  rtc.setDOW(TUESDAY);
  Serial.print("Day of week set to: ");
  
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow wednesday") {  
  rtc.setDOW(WEDNESDAY);
  
  Serial.print("Day of week set to: ");
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow thursday") {  
  rtc.setDOW(THURSDAY);
  
  Serial.print("Day of week set to: ");
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow friday") {  
  rtc.setDOW(FRIDAY);
  
  Serial.print("Day of week set to: ");
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow saturday") {  
  rtc.setDOW(SATURDAY);
  
  Serial.print("Day of week set to: ");
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 
 else if (Serial_Command == "clock dow sunday") {  
  rtc.setDOW(SUNDAY);
  
  Serial.print("Day of week set to: ");
  Serial.println(rtc.getDOWStr()); // Send time  
  Serial.println();
 }
 

 // ######################### Clock - date #####################

 else if (Serial_Command.substring(0, 10) == "clock date") { // clock date DD MM YYYY
 
    String Day;
    String Month;
    String Year;

  Day = Serial_Command.substring(11, 13);
  Month = Serial_Command.substring(14, 16);
  Year = Serial_Command.substring(17, 21); 

  rtc.setDate(Day.toInt(), Month.toInt(), Year.toInt());  
  
    
  Serial.print("Date set to: ");
  Serial.println(rtc.getDateStr()); // Send time  
  Serial.println(); 
 }
  


// ############### Help ###############

    else if (Serial_Command == "help") {

      Serial.println();
      Serial.println("###########################################");
      Serial.println();
      Serial.println("Avalible commands:");
      Serial.println();
      Serial.println("clock = shows current time");
      Serial.println();
      Serial.println("clock date = sets date, format MM DD YYYY");
      Serial.println();
      Serial.println("clock dow = sets the day of the week, capital letters");
      Serial.println();
      Serial.println("clock time = sets time, format HH MM SS");
      Serial.println();
      Serial.println("relay 1 = Switching state of Relay 1");
      Serial.println("relay 2 = Switching state of Relay 2");
      Serial.println("relay 3 = Switching state of Relay 3");
      Serial.println("relay 4 = Switching state of Relay 4");
      Serial.println("relay 5 = Switching state of Relay 5");
      Serial.println("relay 6 = Switching state of Relay 6");
      Serial.println("relay 7 = Switching state of Relay 7");
      Serial.println("relay 8 = Switching state of Relay 8");
      Serial.println();
      Serial.println("relay all = Switching all Relay's OFF");
      Serial.println();
      Serial.println("relay state = Lists the state of all relays");
      Serial.println();
      Serial.println("logging # = Set tick count has to be between 1 and 1000");
      Serial.println();
      Serial.println("Help = Take a wild guess :-D");
      Serial.println();
      Serial.println("###########################################");
      Serial.println();

  
}
  

// ############### Command not recognized ###############

  else Serial.println("Command not recognized try typing help");

  
// ###############  end of command list check ###############

  Serial_Command = "";
    Serial.flush();


delay(500);

  } // end of command list check

}

