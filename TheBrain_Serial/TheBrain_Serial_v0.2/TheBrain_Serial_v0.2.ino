// --------------------------------------------- Misc ---------------------------------------------

String Software_Version = "The Brain - CLI v0.2";

int Loop_Delay = 100;


// --------------------------------------------- Serial CLI ---------------------------------------------

String Serial_CLI_Input;

// --------------------------------------------- Serial CLI Relay ---------------------------------------------

int Serial_CLI_Relay_Begin_Pin = 22;
int Serial_CLI_Relay_End_Pin = 29;

// Relay 1 -- 22 // Old lights
// Relay 2 -- 23 // Kitchen lights
// Relay 3 -- 24 // Table lights
// Relay 4 -- 25 // USB Chargers & 12v plugs
// Relay 5 -- 26 // Blower
// Relay 6 -- 27 // Bilge pump
// Relay 7 -- 28 // --- Not used ---
// Relay 8 -- 29 // --- Inverter 230v ---


// --------------------------------------------- Serial Print ---------------------------------------------

String Serial_Print_Input;
bool Serial_Print_New_Line;


// --------------------------------------------- Wireless Button's ---------------------------------------------

#define Wireless_Button_A 42
#define Wireless_Button_C 45
#define Wireless_Button_B 43
#define Wireless_Button_D 44
