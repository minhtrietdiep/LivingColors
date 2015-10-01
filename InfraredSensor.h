#ifndef INFRAREDSENSOR_H
#define INFRAREDSENSOR_H

class InfraredSensor {
  private:
    int pin;
  public:
    InfraredSensor(int pin);
    int GetValue();
};

#endif
