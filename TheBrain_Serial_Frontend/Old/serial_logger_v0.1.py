## import the serial library
import serial

## Boolean variable that will represent 
## whether or not the arduino is connected
connected = False

## establish connection to the serial port that your arduino 
## is connected to.

locations=['/dev/ttyACM0']

for device in locations:
    try:
        print "Trying...",device
        ser = serial.Serial(device, 115200)
        break
    except:
        print "Failed to connect on",device

## loop until the arduino tells us it is ready
while not connected:
    serin = ser.read()
    connected = True

## open text file to store the current 
##gps co-ordinates received from the rover    
Log_File = open("/media/usbtick/TheBrawn.log", 'w')


## read serial data from arduino and 
## write it to the text file 'position.txt'
while 1:
    if ser.inWaiting():
        Serial_Input=ser.readline()
        print(Serial_Input) 

	Log_File.write(Serial_Input)

        Log_File.flush()





## close the serial connection and text file
Log_File.close()
ser.close()

