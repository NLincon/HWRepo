/*
 * MyMatrix.h
 *
 *  Created on: 11 ���. 2019 �.
 *      Author: ������
 */

#ifndef MYMATRIX_H_
#define MYMATRIX_H_

namespace std {

class MyMatrix {
public:
	MyMatrix();
	int operator[] (int);
	virtual ~MyMatrix();
};

} /* namespace std */

#endif /* MYMATRIX_H_ */
