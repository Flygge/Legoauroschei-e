#include <Joystick.h>
#include <legopowerfunctions.h>

LEGOPowerFunctions lego(12); //pin where infrared transmitter is connected
Joystick joystick(A0, A1, 13);

int ReglerWert;
int Regler = A2;
int pinX = A1;
int a;
void setup() {

Serial.begin(9600);


}

void loop() {
   
  int a = analogRead(pinX);
  Serial.println(a);
  ReglerWert = analogRead(Regler); 
  
  drive();
  direction();


}


void drive() {

  switch(ReglerWert)
     {
    case 1 ... 70:
    lego.SingleOutput(0, PWM_REV1, BLUE, CH1);     
  delay(250);
      break;

    case 71 ... 140 :
     lego.SingleOutput(0, PWM_REV2, BLUE, CH1); 
  delay(250);
      break;

    case 141 ... 210:
    lego.SingleOutput(0, PWM_REV3, BLUE, CH1);   
  delay(250);
      break;

    case 211 ... 280:
    lego.SingleOutput(0, PWM_REV4, BLUE, CH1);     
  delay(250);
      break;
    
    case 281 ... 350:
    lego.SingleOutput(0, PWM_REV5, BLUE, CH1);    
  delay(250);
      break;

    case 351 ... 420:
    lego.SingleOutput(0, PWM_REV6, BLUE, CH1);     
  delay(250);
      break;

    case 421 ... 490:
    lego.SingleOutput(0, PWM_REV7, BLUE, CH1);    
  delay(250);
      break;
    
    case 491 ... 530:
    lego.SingleOutput(0, PWM_BRK, BLUE, CH1);    
  delay(250);
      break;

    case 531 ... 600:
    lego.SingleOutput(0, PWM_FWD1, BLUE, CH1);   
  delay(250);
      break;

    case 601 ... 670:
    lego.SingleOutput(0, PWM_FWD2, BLUE, CH1);     
  delay(250);
      break;

    case 671 ... 740:
    lego.SingleOutput(0, PWM_FWD3, BLUE, CH1);    
  delay(250);  
      break;

    case 741 ... 810:
    lego.SingleOutput(0, PWM_FWD4, BLUE, CH1);   
  delay(250); 
      break;

    case 811 ... 880:
    lego.SingleOutput(0, PWM_FWD5, BLUE, CH1);    
  delay(250);  
      break;

    case 881 ... 950:
    lego.SingleOutput(0, PWM_FWD6, BLUE, CH1);   
  delay(250);  
      break;

    case 951 ... 1024:
    lego.SingleOutput(0, PWM_FWD7, BLUE, CH1);   
  delay(250); 
      break;
  }   

}

void direction() {
  
  if (a < 480) {
   lego.SingleOutput(0, PWM_FWD1, RED, CH1);
     delay(250);
     
  }
  else {
    lego.SingleOutput(0, PWM_REV1, RED, CH1);
    delay(250);
    
  }

 
}  
