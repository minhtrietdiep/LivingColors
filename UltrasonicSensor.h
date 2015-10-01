#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

class UltrasonicSensor {
  private:
    int pin;
  public:
    UltrasonicSensor(int pin);
    int GetValue();
};

#endif
