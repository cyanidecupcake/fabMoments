

const int greenLEDPin = 9;    // LED connected to digital pin 9
const int redLEDPin = 10;     // LED connected to digital pin 10
const int blueLEDPin = 11;    // LED connected to digital pin 11

void setup() {
  // put your setup code here, to run once:// set the digital pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
// green LED 
analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 255);
    analogWrite(blueLEDPin, 0);
    

    delay (1300);

    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 100);
    analogWrite(blueLEDPin, 0);

        delay (1300);
        
        analogWrite(redLEDPin,  0);
    analogWrite(greenLEDPin, 25);
    analogWrite(blueLEDPin, 0);

    delay (1300);
// Blue LED
    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 255);
    

    delay (1300);

    analogWrite(redLEDPin, 0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 100);

        delay (1300);
        
        analogWrite(redLEDPin,  0);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 25);

    delay (1300);

   // Red LED 
        
        analogWrite(redLEDPin, 255);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);
    

    delay (1300);

    analogWrite(redLEDPin, 100);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);

        delay (1300);
        
        analogWrite(redLEDPin,  25);
    analogWrite(greenLEDPin, 0);
    analogWrite(blueLEDPin, 0);

    delay (1300);
    }
