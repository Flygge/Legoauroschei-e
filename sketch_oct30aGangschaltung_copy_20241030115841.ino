#include "SevSeg.h" 
SevSeg sevseg; 

void setup() 
{
byte numDigits = 4; //Hier wird die Anzahl der Ziffern angegeben
byte digitPins[] = {2, 3, 4, 5}; //Die Pins zu den Ziffern werden festgelegt
byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13}; //Die Pins zu den //Segmenten werden festgelegt
sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins); //In diesem
//Abschnitt kann man nun entweder testen welche Art von Display man besitzt oder
//wenn man es schon weiß angeben ob es sich um ein COMMON_CATHODE oder
//COMMON_ANODE Display handelt. Das Display funktioniert nur wenn die richtige
//Art eingetragen ist, ansonsten werden alle Segmente gleichzeitig leuchten.

}

void loop() 
{
  switch(a){
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

    case 8:
     sevseg.setNumber(0008,4); 
     sevseg.refreshDisplay(); 
     sevseg.setBrightness(90); 
    break;

    case 9:
     sevseg.setNumber(0009,4); 
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