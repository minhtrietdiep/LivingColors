#include "InfraredSensor.h"

InfraredSensor::InfraredSensor(int pin){
  pin = pin;
}

int InfraredSensor::GetValue() {
  return analogRead(pin);
}

