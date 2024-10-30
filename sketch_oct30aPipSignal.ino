#include <HCSR04.h>

byte triggerPin = 13;
byte echoPin = 12;

void setup () {
  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
}

void loop () {

  
  double* distances = HCSR04.measureDistanceCm();
  
  Serial.print("1: ");
  Serial.print(distances[0]);
  Serial.println(" cm");
  
  Serial.println("---");
  delay(250);

  int a = distances[0];

  if(a<10 && a>=0){
    tone(11,550); 
    delay(500); 
    noTone(11); 
    delay(500);
    Messen();
    }else if(a<20 && a>=11){
      tone(11,450); 
      delay(1000); 
      noTone(11); 
      delay(1000);
      Messen();
  }
}

void Messen(){
  double* distances = HCSR04.measureDistanceCm();
  
  Serial.print("1: ");
  Serial.print(distances[0]);
  Serial.println(" cm");
  
  Serial.println("---");
  delay(250);

  int a = distances[0];
}