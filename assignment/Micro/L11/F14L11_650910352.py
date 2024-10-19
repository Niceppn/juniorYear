import serial
import time

arduino = serial.Serial('COM3', 9600)
time.sleep(2)

def get_light_intensity():
    if arduino.in_waiting > 0:
        ldr_value = arduino.readline().decode().strip()
        print(f"ตอนนี้ค่าความสว่างเท่ากับ {ldr_value}")

while True:
    get_light_intensity()
    time.sleep(1)
