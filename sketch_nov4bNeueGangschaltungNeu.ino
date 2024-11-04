#include <PowerFunctions.h>


PowerFunctions pf(12, 0);

void setup() {
  Serial.begin(9600);
  Serial.println(F("READY"));
}

void loop() {
  // put your main code here, to run repeatedly:
   step(RED, PWM_FWD7, 500);
  delay(1000); // 1 Sekunde warten
  step(BLUE, PWM_FWD7, 500);
  delay(1000);

  
}

void step(uint8_t output, uint8_t pwm,  uint16_t time) {
  pf.single_pwm(output, pwm);
  delay(time);
  pf.single_pwm(output, PWM_BRK);
  delay(30);
  pf.single_pwm(output, PWM_FLT);
}

