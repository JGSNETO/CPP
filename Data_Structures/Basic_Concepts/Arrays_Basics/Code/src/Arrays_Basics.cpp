//============================================================================
// Name        : Arrays_Basics.cpp
// Author      : José
// Version     :
// Copyright   : This is created based on my Mastering Data Structures & Algorithms using C and C++ course
// Description : Basics about arrays
//============================================================================
/*
 * Arrays are defined as collection of similar data elements(e.g: Int).
 * How to define: int A[size];
 * A[0] = 27;
 * */

#include <iostream>
using namespace std;

int main() {
	int A[5];
	int b[5]= {1,2,3,4,5};
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}
