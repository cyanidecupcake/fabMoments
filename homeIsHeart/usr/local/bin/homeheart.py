#!/usr/bin/env python
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

GPIO.setup(18, GPIO.OUT)
GPIO.setup(23, GPIO.OUT)
GPIO.setup(24, GPIO.OUT)
power = True

while True :
    #print("Lights off")#DEBUG
    GPIO.output(18, GPIO.LOW)
    GPIO.output(23, GPIO.LOW)
    GPIO.output(24, GPIO.LOW)
    time.sleep(3)
    #print("Lights on")#DEBUG
    GPIO.output(18, power)
    GPIO.output(23, power)
    GPIO.output(24, power)
    #power = not power
    time.sleep(3)

GPIO.cleanup()
