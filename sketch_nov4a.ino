#include <PowerFunctions.h>
#include <Joystick.h>

Joystick joystick(A0, A1, 13);
int pinX = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(pinX);
  Serial.println(a);
  
  if(a < 500){
   
    
  }
   if else(a > 520) {
    
   }  

  
}



