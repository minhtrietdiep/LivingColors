#ifndef HARDWARECONTROL_H
#define HARDWARECONTROL_H
#include "iSensor.h"
#include "iRgb.h"
#include "UltrasonicSensor.h"
#include "InfraredSensor.h"
#include "SerialInput.h"
#include "RgbLed.h"
#include "SerialOutput.h"

class HardwareControl : public iRgb, public iSensor {
  public:
    HardwareControl();
    void Init(Sensor sensor);
    void Init(Output output);
    void SetColor(int hue);
    int GetValue();
    void SetPins(int r, int g, int b);
    void SetBaudrate(int baud);
    void SetIrPin(int pin);
    void SetUsPin(int pin);
    
  private:
  	RgbLed led;
  	SerialOutput output;
  	UltrasonicSensor us;
  	InfraredSensor ir;
  	SerialInput input;
  	int inMode;
  	int outMode;
  	int rpin;
  	int gpin;
  	int bpin;
  	int irpin;
  	int uspin;
    int baudrate;
    int hue;
    int rgb[3];
};

#endif
