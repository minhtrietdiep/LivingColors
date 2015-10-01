#ifndef SERIALOUTPUT_H
#define SERIALOUTPUT_H

class SerialOutput {
  private:
    void calculateRGB(int hue, int *rgb);
  public:
    SerialOutput(int baudrate);
    void init();
    void SetColor(int hue);
};

#endif
