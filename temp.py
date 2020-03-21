import serial

serial_port = '/dev/tty.usbmodemFD121'
baud_rate = 9600;
write_to_file_path = "tempcdata.txt"

ser = serial.Serial(serial_port, baud_rate)
while True:
        line = ser.readline();
        line = line.decode("utf-8")
        with open(write_to_file_path, "a+") as output_file:
                output_file.write(line)
        print(line)
