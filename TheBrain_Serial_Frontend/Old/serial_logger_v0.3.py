import serial, time
Serial = serial.Serial('/dev/ttyACM0', 115200) # Establish the connection on a specific port

Log_File = open("/media/USB-Stick/TheBrawn.log", 'w')

print ""
print "---------- Logging to /media/USB-Stick/TheBrawn.log ---------"
print ""

while True:
        Serial_Input = Serial.readline()

        Log_File.write(Serial_Input)
	Log_File.write(time.strftime("%H:%M:%S;%d-%m-%Y;"))
	Log_File.flush()

	print Serial_Input



Log_File.close()
Serial.close()

