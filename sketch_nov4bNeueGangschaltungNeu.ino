#include <SevSeg.h>
#include <Joystick.h>
#include <IRremote.hpp>

const int irLedPin = 3;  // Pin, an den die IR-LED angeschlossen ist
int ReglerWert;
int Regler = A0;
int a = 0;


// LEGO Power Functions IR-Befehle
#define PF_CHANNEL 0
#define PF_CMD_FORWARD 1
#define PF_CMD_BACKWARD 2
#define PF_CMD_BRAKE 0
#define DRIVE_CHANNEL 1   // Kanal für den Antriebsmotor
#define STEERING_CHANNEL 2// Kanal für den Lenkmotor

SevSeg sevseg;
IRsend irsend;
Joystick joystick(A0, A1, 13);
int pinX = A1;


void setup() {
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
     
    switch(a) {

    case 1 ... 70:
     steer(-7);
      break;

    case 71 ... 140:
     steer(-6);
      break;

    case 141 ... 210:
     steer(-5);
      break;

    case 211 ... 280:
     steer(-4);
      break;

      case 281 ... 350:
     steer(-3);
      break;

    case 351 ... 420:
     steer(-2);
      break;

      case 421 ...490:
     steer(-1);
      break;

    case 491 ... 520:
     steer(0);
      break;

      case 521 ... 590:
     steer(1);
      break;

    case 591 ... 660:
     steer(2);
      break;

      case 661 ... 730:
     steer(3);
      break;

    case 731 ... 800:
     steer(4);
      break;

      case 801 ... 870:
     steer(5);
      break;

    case 871 ... 940:
     steer(6);
      break
      ;
      case 941 ... 1024:
     steer(7);
      break;
    }  

    switch(i)
     {
    case 1 ... 70:
    sendPowerFunctionsCommand(PF_CHANNEL, 1);
  delay(2000);
      break;

    case 71 ... 140 :
    sendPowerFunctionsCommand(PF_CHANNEL, 2);
  delay(2000);
      break;

    case 141 ... 210:
    sendPowerFunctionsCommand(PF_CHANNEL, 3);
  delay(2000);
      break;

    case 211 ... 280:
    sendPowerFunctionsCommand(PF_CHANNEL, 4);
  delay(2000);
      break;

    case 281 ... 350:
    sendPowerFunctionsCommand(PF_CHANNEL, 5);
  delay(2000);
      break;

    case 351 ... 420:
    sendPowerFunctionsCommand(PF_CHANNEL, 6);
  delay(2000);
      break;

    case 421 ... 490:
    sendPowerFunctionsCommand(PF_CHANNEL, 7);
  delay(2000);
      break;

    case 491 ... 530:
    sendPowerFunctionsCommand(PF_CHANNEL, 0);
    
  delay(2000);
      break;

    case 531 ... 600:
    sendPowerFunctionsCommand(PF_CHANNEL, -1);
  delay(2000);
      break;

    case 601 ... 670:
    sendPowerFunctionsCommand(PF_CHANNEL, -2);
  delay(2000);
      break;

    case 671 ... 740:
    sendPowerFunctionsCommand(PF_CHANNEL, -3);
  delay(2000);  
      break;

    case 741 ... 810:
    sendPowerFunctionsCommand(PF_CHANNEL, -4);
  delay(2000); 
      break;

    case 811 ... 880:
    sendPowerFunctionsCommand(PF_CHANNEL, -5);
  delay(2000);  
      break;

    case 881 ... 950:
    sendPowerFunctionsCommand(PF_CHANNEL, -6);
  delay(2000);  
      break;

    case 951 ... 1024:
    sendPowerFunctionsCommand(PF_CHANNEL, -7);
  delay(2000); 
      break;
  switch(a) {
    
    case 1:
     sevseg.setNumber(0001,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 2:
     sevseg.setNumber(0002,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 3:
     sevseg.setNumber(0003,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 4:
     sevseg.setNumber(0004,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 5:
     sevseg.setNumber(0005,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 6:
     sevseg.setNumber(0006,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 7:
     sevseg.setNumber(0007,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 10:
     sevseg.setNumber(0010,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 11:
     sevseg.setNumber(0011,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 12:
     sevseg.setNumber(0012,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 13:
     sevseg.setNumber(0013,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 14:
     sevseg.setNumber(0014,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 15:
     sevseg.setNumber(0015,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;
    
  }

 
  
}

void sendPowerFunctionsCommand()
  uint8_t command = 0b0000;  // Basisbefehl
  
 int command;
  if (speed > 0) {
    command = speed;
} else {
    command = 8 + abs(speed);
}

void steer(int direction) {
  int command = (direction > 0) ? 1 : (8 + abs(direction));   // Links/Rechts
  sendPowerFunctionsCommand(STEERING_CHANNEL, command);
}