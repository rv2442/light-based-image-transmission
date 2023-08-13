import serial
import base64
from io import BytesIO
from PIL import Image
import time
import binascii

long_string = ""
fixed_base64_str = ""

ser = serial.Serial('COM11', 9600, timeout=15)
ser.reset_input_buffer()
#time.sleep(2)

while True:
    if ser.in_waiting > 0:
        data = ser.read().decode('utf-8')
        long_string += data
        print(data)
        if " " in long_string:
            break

ser.close()
long_string = long_string[:-1]
print(f"\n\n{long_string}\n\n")


# Decode the image from the fixed base64 string
image_bytes = base64.b64decode(fixed_base64_str)
image = Image.open(BytesIO(image_bytes))
image.show()


