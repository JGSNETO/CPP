//============================================================================
// Name        : Arrays_Practice.cpp
// Author      : José
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Initialization method 01
	int A[5];
	A[0]= 1;
	A[1]= 2;
	A[2]= 3;
	A[3]= 4;
	A[4]= 5;
	cout<<sizeof(A)<<endl;
	cout<<A[1]<<endl;
	printf("%d\n",A[2]);
	//Initialization method 02: Assign values directly
	int b[5]= {1,2,3,4,5};
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", b[i]);
	}
	//Initialization method 03: You can skip the size
	int C[]={1,2,3,4,5,6,7,8,9,10};
	cout<<sizeof(C)<<endl;
	//When you don't know the size
	//For each
	for(int x:C){
		cout<<x<<endl;
	}
	//Initialization method 04: Receiving the input from the user
	int n;
	cout<<"Enter size"<< endl;
	cin>>n;
	//You can create but not initialize directly. Initial elements are garbage.
	int D[n];
	D[0]=1;
	cout<<D[0]<<endl;
	return 0;
}
