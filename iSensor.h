#ifndef ISENSOR_H
#define ISENSOR_H

/*
 * This is the generic sensor class
 * calling GetValue(); will always return
 * a hue value between 0 and 360 depending on
 * the sensor distance
 */

class iSensor {
  private:
  public:
    iSensor(){}
  	enum Sensor {
  		Ultrasonic,
  		Infrared,
  		Serialp
  	};
    virtual void Init(Sensor sensor);
    virtual int GetValue();
};

#endif
