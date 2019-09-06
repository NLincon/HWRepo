//============================================================================
// Name        : helloworld.cpp
// Author      : NLincon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arduino.h"

#define N_STEPS 10

using namespace std;

int main() {
	setup();
	for(int i = 0; i < N_STEPS; i++) loop();
	return 0;
}
