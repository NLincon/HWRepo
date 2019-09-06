//============================================================================
// Name        : helloworld.cpp
// Author      : NLincon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arduino.h"
using namespace std;

int main() {
	cout << "!!!Hello NLincon!!!" << endl; // prints !!!Hello NLincon!!!
	setup();
	for(int i = 0; i < 10; i++) loop();
	return 0;
}
