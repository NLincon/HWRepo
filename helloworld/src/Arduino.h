/*
 * Arduino.h
 *
 *  Created on: 6 сент. 2019 г.
 *      Author: Никита
 */

#ifndef ARDUINO_H_
#define ARDUINO_H_

namespace std {

void setup();
void loop();

class Arduino {
public:
	Arduino();
	virtual ~Arduino();
};

} /* namespace std */

#endif /* ARDUINO_H_ */
