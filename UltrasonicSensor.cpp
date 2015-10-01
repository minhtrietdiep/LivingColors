#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(int pin) {
  pin = pin;
}

int UltrasonicSensor::GetValue(){
  return analogRead(pin);
}
