/*
 * Arduino.cpp
 *
 *  Created on: 6 сент. 2019 г.
 *      Author: Никита
 */

#include "Arduino.h"

namespace std {

void digitalWrite(int pin,int value) {
	cout << "value = " << value << endl;
}

void delay(int ms) {

}

void setup() {

}


void loop() {
	int pin = 1;
	int value = 1;
	int ms = 1000;

	digitalWrite(pin, value);
	value = 0;
	delay(ms);
	digitalWrite(pin, value);
}

Arduino::Arduino() {
	// TODO Auto-generated constructor stub

}

Arduino::~Arduino() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
