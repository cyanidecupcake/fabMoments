

// setup leds with: pin, current brightness, target brightness
int lamp[] = {10,0,0};    
int roof[] = {9,0,0};
int desk[] = {11,0,0};

int fade_speed = 30;

/*
 * 
Values that look 'nice'
desk 0 -100
lamp 0 - 100 (20)
roof 20 - 200
 */


void setup() {
  pinMode(lamp[0], OUTPUT);
  pinMode(roof[0], OUTPUT);
  pinMode(desk[0], OUTPUT);

  digitalWrite(roof[0], LOW);
  digitalWrite(lamp[0], LOW);
  digitalWrite(desk[0], LOW);
  
}

void loop() {

//Set target brightness value then loop through fading lights till target is met


//lamp + desk on
    roof[2] = 20;
    desk[2] = 100;
    lamp[2] = 100;
  while(lamp[1] != lamp[2]){
    gofade();
  }
  
  //roof off
    roof[2] = 20;
  while(roof[1] != roof[2]){
  gofade();
  }
  delay(1000);
  
  //roof on, other off
    desk[2] = 0;
    lamp[2] = 0;
    roof[2] = 200;
  while(roof[1] != roof[2]){
  gofade();
  }
  delay(3000);
  
  //roof + desk off
  roof[2] = 20;
    desk[2] = 0;
    lamp[2] = 100;
  while(lamp[1] != lamp[2]){
    gofade();
  }

}


void gofade(){
  //pass target values to update brightness
  delay(fade_speed);
  lamp[1] = fade_to(lamp[0], lamp[1], lamp[2]);
  roof[1] = fade_to(roof[0], roof[1], roof[2]);
  desk[1] = fade_to(desk[0], desk[1], desk[2]); 
}

int fade_to (int pin, int current, int target){
  //adjust brightness 1 closer to target and return current
  if(current < target){
    current ++;
  } else if (current > target){
    current --;
  }
  analogWrite(pin,current);

  return current;
}
 



