#include <IRremote.h>
//Pin der IR Diode am digitalen Pin 3 angeschlossen
// speichern des am Anschluss A0 gelesenen Werts
int ReglerWert;
int Regler = A0;


int irSendPin = 3;
IRsend irSender;
//Message welche gesendet werden soll
char message[5] = {'A','B','C','D','E'};
void setup() {
   //beginn der seriellen Kommunikation mit 9600 baud
    Serial.begin(9600);
}
void loop() {

  ReglerWert = analogRead(Regler);

    delay(1000);  
    int i = ReglerWert;
    switch(i)
     {
    case 1 ... 70:
      //den Charakter an Position "i" entnehmen
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
        char sign = i;
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
