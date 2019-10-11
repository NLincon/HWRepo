//============================================================================
// Name        : array_filling.cpp
// Author      : NLincon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyMatrix.h"

#define N	5

using namespace std;

MyMatrix& matrix(int);
ostream& operator<<(ostream&, MyMatrix&);

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << matrix(N) << endl;
	return 0;
}

MyMatrix& matrix(int size) {
	static MyMatrix m;
	return m;
}
ostream& operator<<(ostream& s, MyMatrix& m) {
	for (int i = 1; i <= N*N; i++) {
		if (i % N)
			cout << m[i] << '\t';
		else
			cout << m[i] << endl;
	}
	return s;
}
