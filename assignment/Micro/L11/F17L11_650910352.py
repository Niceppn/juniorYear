import serial
import time

arduino = serial.Serial('COM3', 9600)
time.sleep(2)

def send_command(command):
    arduino.write((command + '\n').encode())
    time.sleep(0.1)

def control_light(location, action):
    command = f"{location} {action}"
    send_command(command)

control_light("kitchen", "on")
control_light("livingroom", "off")
control_light("bathroom", "on")
