#!/usr/bin/env python

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings (False)

pins =[11,13,15,18]
for i in pins:
    GPIO.setup(i,GPIO.OUT)

def switchLighting(x):
    for i in pins:
        print(i,x==i)
##        if x==i :
##            GPIO.output(i,GPIO.HIGH)
##        else :
##            GPIO.output(i,GPIO.OUT)
        GPIO.output(i,x==i)

while True:
    for i in pins:
        switchLighting(i)
        time.sleep(2)
