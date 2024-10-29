#include <IRremote.h>
//Pin der IR Diode am digitalen Pin 3 angeschlossen
// speichern des am Anschluss A0 gelesenen Werts
int ReglerWert;
int Regler = A0;
int a = 0;


int irSendPin = 3;
IRsend irSender;
//Message welche gesendet werden soll
char message[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
void setup() {
   //beginn der seriellen Kommunikation mit 9600 baud
    Serial.begin(9600);
}
void loop() {

  ReglerWert = analogRead(Regler);

    delay(1000);  
    int i = ReglerWert;
    signal(); //lege den Wert für a fest 
    switch(i)
     {
    case 1 ... 70:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 71 ... 140 :
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 141 ... 210:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 211 ... 280:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 281 ... 350:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 351 ... 420:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 421 ... 490:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 491 ... 530:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 531 ... 600:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 601 ... 670:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 671 ... 740:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 741 ... 810:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 811 ... 880:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 881 ... 950:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;

    case 951 ... 1024:
      //den Charakter an Position "i" entnehmen
        char sign = message[a];
        //in den ASCII Zahlenwert umwandeln
        unsigned long value = sign;
        //Ausgabe des Zeichens sowie der Zahl auf der seriellen Schnittstelle
        Serial.print("Zeichen = ");
        Serial.print(sign);
        Serial.print(" Zahl = ");
        Serial.println(value);
        //Absenden des Zahlenwertes
        irSender.sendSony(value,12);
        //eine Pause von 25ms.
        delay(25);
      break;
     }
    
    
    
     
        
    }    
    //eine Pause von 500ms.
  
    //Das char Array durchlaufen...
  
}

void Signal(){
  switch(i) {
    case: 1 ... 70:
         a = 1; 
        break;

    case: 71 ... 140:
         a = 2; 
        break;

    case: 141 ... 210:
         a = 3; 
        break;

    case: 211 ... 280:
         a = 4; 
        break;

    case: 281 ... 350:
         a = 5; 
        break;

    case: 351 ... 420:
          a = 6; 
        break;

    case: 421 ... 490:
          a = 7; 
        break;

    case: 491 ... 530:
         a = 8; 
        break;

    case: 531 ... 600:
         a = 9; 
        break;

    case: 601 ... 670:
         a = 10; 
        break;

    case: 671 ... 740:
         a = 11; 
        break;

    case: 741 ... 810:
         a = 12; 
        break;

    case: 811 ... 880:
         a = 13; 
        break;

    case: 881 ... 950:
         a = 14; 
        break;

    case: 951 ... 1024:
         a = 15; 
        break;
  }
   
}


