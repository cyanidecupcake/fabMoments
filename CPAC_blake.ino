//remember greenLEDPin is just a name, if you have more than one LED you will need to give each one a unique name and different pin number.
const int greenLEDPin = 9;    // LED connected to digital pin 9
const int redLEDPin = 10;     // LED connected to digital pin 10
const int blueLEDPin = 11;    // LED connected to digital pin 11



void setup() {
  // put your setup code here, to run once:

  // set the digital pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

} //close setup

void loop() {
  // put your main code here, to run repeatedly:

  //controls one LED
    analogWrite(redLEDPin, 255); //0 can be any value between 0 and 255
    analogWrite(greenLEDPin, 0); //0 can be any value between 0 and 255
    analogWrite(blueLEDPin, 0); //50 can be any value between 0 and 255

  //delay is in miliseconds, above code will continue to happen for this amount of time
    delay (1000);

  //changes LED
    analogWrite(redLEDPin, 120); //can be any value between 0 and 255
    analogWrite(greenLEDPin, 0); //can be any value between 0 and 255
    analogWrite(blueLEDPin, 0); //can be any value between 0 and 255

  //delay is in miliseconds, above code will continue to happen for this amount of time
    delay (1000);

  //changes LED
    analogWrite(redLEDPin, 50); //can be any value between 0 and 255
    analogWrite(greenLEDPin, 0); //can be any value between 0 and 255
    analogWrite(blueLEDPin, 0); //can be any value between 0 and 255

  //delay is in miliseconds, above code will continue to happen for this amount of time
    delay (1000);
} //close loop


