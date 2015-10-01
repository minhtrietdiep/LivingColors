#ifndef RGBLED_H
#define RGBLED_H

class RgbLed {
  private:
    int rpin;
    int gpin;
    int bpin;
    void calculateRGB(int hue, int *rgb);
  public:
    RgbLed(int rpin, int gpin, int bpin);
    void SetColor(int hue);
};

#endif
