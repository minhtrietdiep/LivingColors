#include "SerialInput.h"
#include <Arduino.h>

SerialInput::SerialInput() {
  if (!Serial) Serial.begin(9600);
}

int SerialInput::GetValue() {
	if (Serial.available() > 0) {
		return(Serial.parseInt());
	}
}
