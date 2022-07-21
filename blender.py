import serial
import time
import bpy

ser=serial.Serial('COM8','9600')
time.sleep(3)
ser.write(b'a\n')

cube=bpy.context.selected_objects[0]


for x in range(500):
    ser.write(b'a\n')
    cube.location.z=5


ser.close()
