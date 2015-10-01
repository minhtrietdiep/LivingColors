#ifndef IRGB_H
#define IRGB_H

#include <Arduino.h>

class iRgb {
  private:
  public:
    iRgb(){}
	  enum Output {
		  Led,
		  Serialp
	  };
	  virtual void Init(Output output);
    virtual void SetColor(int hue);

};

#endif


