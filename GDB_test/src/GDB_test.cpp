//============================================================================
// Name        : GDB_test.cpp
// Author      : NLincon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>

#define A_SIZE		10

using namespace std;

void randFillArr(int Array[], int range);
int sumArr(int Array[]);
void printArr(int Array[]);

int main() {
	srand(time(NULL));
	int range = 8;								// Range setting
	int A[A_SIZE];

	randFillArr(A, range);
	printArr(A);
	cout << sumArr(A) << endl;

	return 0;
}

void randFillArr(int Array[], int range) {
	for (int i = 0; i < A_SIZE; i++)
		Array[i] = rand() % range;
}

int sumArr(int Array[]) {
	int sum = 0;
	for (int i = 0; i < A_SIZE; i++)
		sum += Array[i];
	return sum;
}

void printArr(int Array[]) {
	for (int i = 0; i < A_SIZE; i++)
			cout << Array[i] << '\t';
	cout << endl;
}
