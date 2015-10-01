#include "HardwareControl.h"
#include "iSensor.h"
#include "iRgb.h"
#include "UltrasonicSensor.h"
#include "InfraredSensor.h"
#include "SerialInput.h"
#include "RgbLed.h"
#include "SerialOutput.h"
#include <Arduino.h>

HardwareControl::HardwareControl() {
	inMode = -1;
	outMode = -1;
}

void HardwareControl::Init(Sensor sensor){
	if (sensor == iSensor::Ultrasonic) {
		us = new UltrasonicSensor(uspin);
		inMode = 0;
	}
	
	if (sensor == iSensor::Infrared) {
		ir = new InfraredSensor(irpin);
		inMode = 1;
	}
	
	if (sensor == iSensor::Serialp && !Serial) {
		input = new SerialInput(baudrate);
		inMode = 2;
	}
}

void HardwareControl::Init(Output output){
	if (output == iRgb::Led) {
		RgbLed led = new RgbLed(rpin, gpin, bpin);
		outMode = 0;
	}
	
	if (output == iRgb::Serialp && !Serial) {
		SerialOutput out = new SerialOutput(baudrate);
		outMode = 1;
	}
}

void HardwareControl::SetColor(int hue) {
	// Led
	if (outMode == 0) {
		led.SetColor(hue);
	}
	
	// Serial
	if (outMode == 1) {
		output.SetColor(hue);
	}
}

int HardwareControl::GetValue() {
	// Ultrasonic
	if (inMode == 0) {
		return us.GetValue();
	}
	
	// Infrared
	if (inMode == 1) {
		return ir.GetValue();
	}
	
	// Serial
	if (inMode == 2) {
		return input.GetValue();
	}
}

void HardwareControl::SetPins(int r, int g, int b) {
  rpin = r;
  gpin = g;
  bpin = b;
}

void HardwareControl::SetBaudrate(int baud) {
  baudrate = baud;
}

void HardwareControl::SetIrPin(int pin) {
  irpin = pin;
}

void HardwareControl::SetUsPin(int pin) {
  uspin = pin;
}

