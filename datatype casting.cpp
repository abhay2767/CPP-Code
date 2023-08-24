#include<iostream>
using namespace std;
int main()
{
	/////********Data Type casting********/////
	int a = 25;
	float b = 25.5;
	cout<<"The value of A: "<<(float)a<<endl; // here we change the type of data form int to float using ((float)'enter variable')
	              //Or both are same
	cout<<"The value of A: "<<float(a)<<endl;
	             // Also
	cout<<"The value of B: "<<(int)b<<endl; //ans here if we print the vvalue of B without 'b' without (int)'enter variable' ) so value is 25.5
	// but using (int)'enter variable') this wwe will get value of b = 25 only not 25.5 so that is data type casting.
	             // both are same
	cout<<"The value of B: "<<int(b)<<endl;
	///mean that ((float)'enter variable') = float(variable) both are same.
	
	int c = int(b); // we can use as like this
	cout<<"This expression is "<<a+b<<endl;
	cout<<"This expression is "<<a+ int(b)<<endl;
	cout<<"This expression is "<<a+ (int)b;
	return 0;

}