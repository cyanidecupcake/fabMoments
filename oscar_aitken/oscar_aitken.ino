/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/
const int greenLEDPin = 9;    // LED connected to digital pin 9
const int redLEDPin = 10;     // LED connected to digital pin 10
const int blueLEDPin = 11;    // LED connected to digital pin 11


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
  
  // set the digital pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 250);

    delay (1600);

    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 125);
    analogWrite(blueLEDPin, 0);
  
    delay (1600);

    analogWrite(redLEDPin, 62);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);

    delay (1600);

    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);

    delay (3200);

  
  /*// read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

if (sensorValue < 400 ){
    analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 250);

    delay (1600);

    analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 125);
  analogWrite(blueLEDPin, 0);

  delay (1600);

     analogWrite(redLEDPin, 62);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 0);

    delay (1600);
}
else {
  analogWrite(redLEDPin, 0);
  analogWrite(greenLEDPin, 0);
  analogWrite(blueLEDPin, 0);
}*/



}

