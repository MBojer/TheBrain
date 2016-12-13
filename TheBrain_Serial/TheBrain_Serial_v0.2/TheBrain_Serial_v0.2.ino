/* 
*   Bojer was here - The Brain Frontend Serial
*/ 

// --------------------------------------------- Misc ---------------------------------------------

#include "Wire.h"
#define DS3231_I2C_ADDRESS 0x68


// --------------------------------------------- Misc ---------------------------------------------

String Software_Version = "The Brain - Frontend v0.2";


// --------------------------------------------- Serial CLI ---------------------------------------------

String Serial_CLI_Input;

// --------------------------------------------- Serial CLI Relay ---------------------------------------------

int Serial_CLI_Relay_Begin_Pin = 4;
int Serial_CLI_Relay_End_Pin = 12;

// Relay 1 -- 22 // Old lights
// Relay 2 -- 23 // Kitchen lights
// Relay 3 -- 24 // Table lights
// Relay 4 -- 25 // USB Chargers & 12v plugs
// Relay 5 -- 26 // Blower
// Relay 6 -- 27 // Bilge pump
// Relay 7 -- 28 // --- Not used ---
// Relay 8 -- 29 // --- Inverter 230v ---
