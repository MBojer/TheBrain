import serial

Serial = serial.Serial('/dev/ttyACM0', 115200) # Establish the connection on a specific port

Log_File = open("/media/USB-Stick/TheBrawn.log", 'w')

print "TheBrawn # "

while True:
	Serial_Input = Serial.readline()

	print(Serial_Input)

        Log_File.write(Serial_Input)
        Log_File.flush()


#	Terminal_Input = input("TheBrawn # ")
#	print(Terminal_Input)



while True:
    Thread(target = func1).start()
    Thread(target = func2).start()

#while True:










## close the serial connection and text file
Log_File.close()
Serial.close()


