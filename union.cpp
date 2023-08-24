#include<iostream>
using namespace std;

union Money
{
	int rice;
	char car;
	float pound;
};
int main()
{
	union Money ABC;
	ABC.rice = 34;
//	ABC.car = 'A';
//	ABC.pound = 70.5;
	
	cout<<"Rice is: "<<ABC.rice<<endl;
//	cout<<"Car is: "<<ABC.car<<endl;
//	cout<<"Pound is: "<<ABC.pound<<endl;
	//when you compile all value than it return "Garbade Value".
	//so in union you can use only one datatype.
	
	//After leave all datatype initialization you will get right value.
	return 0;
}
