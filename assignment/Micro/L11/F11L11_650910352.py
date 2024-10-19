import serial
import time

arduino = serial.Serial('COM3', 9600)
time.sleep(2)

def send_command(command):
    arduino.write((command + '\n').encode())
    time.sleep(0.1)

def handle_message(message):
    if message == "แดง":
        send_command("red")
    elif message == "เขียว":
        send_command("green")
    elif message == "น้ำเงิน":
        send_command("blue")
    elif message == "เหลือง":
        send_command("yellow")
    else:
        send_command("off")

handle_message("แดง")
