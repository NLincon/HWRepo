//============================================================================
// Name        : helloworld2.cpp
// Author      : NLincon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Initialization
	int i = 1;
	do {
		// Body
		cout << i << endl;
	// Condition
	} while (i++ <= 10);


	// Initialization
	int i = 1;
	do {
		// Body
		cout << i << endl;
	// Condition
	} while (!(i++ <= 10));


	// Initialization
	i = 10;
	// Condition
	while (i-- >= 1) {
		// Body
		cout << i << endl;
	}


	// Initialization
	i = 10;
	// Condition
	while (!(i-- >= 1)) {
		// Body
		cout << i << endl;
	}


	for (int j = 1; j <= 10; j++) {
		cout << j << endl;
	}


	for (int s = 1; true;s++) cout << s << endl;

	// Initialization
	i = 10;
	// Condition
	c1: {
		// Body
		cout << i << endl;
	}
	if (i-- >= 1) goto c2;
	else
		goto c1;
	c2: cout << "Hello World" << endl;

	// Initialization
	i = 10;
	// Condition
	c3: {
		// Body
		cout << i << endl;
	}
	if (i-- < 1) goto c4;
		goto c3;
	c4: cout << "Hello World" << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
