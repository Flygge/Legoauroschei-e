#include <SevSeg.h>
#include <Joystick.h>
#include <IRremote.hpp>

const int irLedPin = 3;  // Pin, an den die IR-LED angeschlossen ist
int ReglerWert;
int Regler = A0;
int a = 0;


// LEGO Power Functions IR-Befehle
#define PF_CHANNEL 4
#define PF_CMD_FORWARD 1
#define PF_CMD_BACKWARD 2
#define PF_CMD_BRAKE 0
#define DRIVE_CHANNEL 4  // Kanal für den Antriebsmotor
#define STEERING_CHANNEL 4// Kanal für den Lenkmotor

SevSeg sevseg;
IRsend irsend;
Joystick joystick(A0, A1, 13);
int pinX = A1;

int speed = 0;
int command = 0;

void setup() {
  Serial.begin(9600);
  pinMode(irLedPin, OUTPUT);
  byte numDigits = 4; //Hier wird die Anzahl der Ziffern angegeben
  byte digitPins[] = {2, 3, 4, 5}; //Die Pins zu den Ziffern werden festgelegt
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13}; //Die Pins zu den //Segmenten werden festgelegt
sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
}

// Funktion zur Steuerung des Power Functions Motors
void sendPowerFunctionsCommand(uint8_t channel, uint8_t command) {
  // Starte einen IR-Pulse im 38-kHz-Bereich
  uint16_t irSignal = 0x4000 | (channel << 12) | (command << 4);
  irsend.sendNEC(irSignal, 16);
}

void loop() {
    int a = analogRead(pinX);
     ReglerWert = analogRead(Regler);
      delay(1000);  
    int i = ReglerWert;
    //Serial.println(a);
    Serial.println(i); 

    switch(i)
     {
    case 1 ... 70:
    drive(-7);
    steer();
  delay(2000);
      break;

    case 71 ... 140 :
    drive(-6);
    steer();
  delay(2000);
      break;

    case 141 ... 210:
    drive(-5);
    steer();
  delay(2000);
      break;

    case 211 ... 280:
    drive(-4);
    steer();
  delay(2000);
      break;

    case 281 ... 350:
    drive(-3);
    steer();
  delay(2000);
      break;

    case 351 ... 420:
    drive(-2);
    steer();
  delay(2000);
      break;

    case 421 ... 490:
    drive(-1);
    steer();
  delay(2000);
      break;
    
    case 491 ... 530:
    drive(0); 
    steer(); 
  delay(2000);
      break;

    case 531 ... 600:
    drive(1); 
    steer();
  delay(2000);
      break;

    case 601 ... 670:
    drive(2);
    steer();
  delay(2000);
      break;

    case 671 ... 740:
    drive(3);
    steer();
  delay(2000);  
      break;

    case 741 ... 810:
    drive(4);
    steer();
  delay(2000); 
      break;

    case 811 ... 880:
    drive(5);
    steer();
  delay(2000);  
      break;

    case 881 ... 950:
    drive(6);
    steer();
  delay(2000);  
      break;

    case 951 ... 1024:
    drive(7);
    steer();
  delay(2000); 
      break;
  }   
}

void drive(int speed) {
  
  if (speed > 0) {
    command = speed;
  }else{
    command = 8 + abs(speed);
    sendPowerFunctionsCommand(4, command);
  }
}

void steer() {
 if (!a < 500 && !a > 520) 
  { 
    command = 0;
  }
 
  
   if (a > 520) 
   {
    command = 1; 
   }
   
     if (a < 500) 
     {
    command = -1; 
     }
     sendPowerFunctionsCommand(4, command);
}

 

