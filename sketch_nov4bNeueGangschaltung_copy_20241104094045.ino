#include <PowerFunctions.h>


PowerFunctions pf(12, 0);

void setup() {
  Serial.begin(9600);
  Serial.println(F("READY"));
}

void loop() {
  // put your main code here, to run repeatedly:
  goForward(1500);
  goBackward(500);
  //while(true) { delay(1000); }
  
}

void step(uint8_t output, uint8_t pwm,  uint16_t time) {
  pf.single_pwm(output, pwm);
  delay(time);
  pf.single_pwm(output, PWM_BRK);
  delay(30);
  pf.single_pwm(output, PWM_FLT);
}

void goForward(uint16_t time){
  //Serial.println(F("FORWARD"));
  pf.combo_pwm(PWM_FWD2, PWM_REV2);
  delay(time);
  pf.combo_pwm(PWM_BRK,PWM_BRK);
  pf.combo_pwm(PWM_FLT,PWM_FLT);
}


void goBackward(uint16_t time){
  //Serial.println(F("BACKWARD"));
  pf.combo_pwm(PWM_REV2, PWM_FWD2);
  delay(time);
  pf.combo_pwm(PWM_BRK,PWM_BRK);
  pf.combo_pwm(PWM_FLT,PWM_FLT);
}