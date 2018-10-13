#include <Servo.h> 
//#define trigger_IN 10
//#define wheel_IN 11
//#define trigger_OUT 5
//#define wheel_OUT 6

int trigger_value;
int wheel_value;
  Servo motor;

void setup() {
  //Serial.begin(9600); //begin serial connection
 // pinMode(trigger_IN, INPUT); //set pin 12 as input from receiver
  //pinMode(11, INPUT); //set pin 11 as input from receiver
  pinMode(5, OUTPUT); //set pin 5  as PWM outputs
  motor.attach(5);
  // pinMode(6, OUTPUT); //set pin 6 as PWM output
}

void loop() {


 // int trigger_value_HIGH = pulseIn(trigger_IN, HIGH, 25000);
  //int trigger_value_LOW = pulseIn(trigger_IN, LOW, 25000);
  //wheel_value = pulseIn(wheel_IN, HIGH, 25000);
  //Serial.println(trigger_value);
  delay(100);
  motor.writeMicroseconds(1650);

  //Serial.print("Channel 1: ");
 // Serial.println(trigger_value_LOW);
 // Serial.print('\n');

  //speedControlTrigger(trigger_value, trigger_OUT);
  //speedControl(wheel_value, wheel_OUT);
  //analogWrite(5, 125);
  //delay(2500);
  //analogWrite(5, 240);
 // delay(500);
 // analogWrite(5, 25);

// delay(200);

}


void speedControlWheel(int PWM, int pin) {
  //if ((PWM <= 1750) and (PWM >= 1100)) //if at resting value
  //  break;
  if (PWM < 1100)
    analogWrite(pin, 10);
  else if (PWM > 1850)
    analogWrite(pin, 200);
  return;
}

void speedControlTrigger(int PWM, int pin) {
  //if ((PWM <= 1750) and (PWM >= 1100)) //if at resting value
  //  break;
  if (PWM < 1100)
    analogWrite(pin, 10);
  else if (PWM > 1850)
    analogWrite(pin, 200);
  return;
}
