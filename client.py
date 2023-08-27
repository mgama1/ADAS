import socket
import RPi.GPIO as GPIO
import time
import serial

servoPIN = 17
GPIO.setmode(GPIO.BCM)
GPIO.setup(servoPIN, GPIO.OUT)

p = GPIO.PWM(servoPIN, 50) # GPIO 17 for PWM with 50Hz
p.start(6) # Initialization

#p.ChangeDutyCycle(5)
def angletoduty(angle):
  angle+=85
  if (angle>120):
    angle=120
  if (angle<60):
    angle=60
  return ((angle/180)*10)+1.5

ser = serial.Serial ("/dev/ttyS0", 9600)    #Open port with baud rate
        
        
s = socket.socket(socket.AF_INET,
socket.SOCK_STREAM)              # Socket will create with TCP and, IP protocols
s.connect(('192.168.1.4', 9999))   # Will connect with the server
msg = s.recv(1024)               # Will receive the reply message string from the server at 1024 B

while msg:
  print('Received:' + msg.decode())
  offset=int(msg.decode().split()[0])
  try:
    object0=msg.decode().split()[1]
  except:
    object0='nada'
  p.ChangeDutyCycle(angletoduty(offset))
  if object0=='stop':
    ser.write(str.encode('s'))
    time.sleep(2)
  else:
    ser.write(str.encode('f'))  
  
  msg = s.recv(1024)             # Will run as long as the message string is empty
  
s.close()                        # Will disconnect the client
