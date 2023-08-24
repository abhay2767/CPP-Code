#include<iostream>
using namespace std;
void go(void);
int sum(int a,int b);//function prototype
//it is use to tell the compiler that given function is availble in program so recornize it.
//if we do not use funtion prototype so it will be give you error because 
//compiler is unable to recognize function so you have you write function prototype.
//without prototyping or finction you have to write the function at first from main() function.

//int a, int b not the Actual parameter so here num1, num2 are Actual parameter.
int main()
{
	int num1,num2;//num1 and num2 are actual argument.
	cout<<"Enter First number"<<endl;
	cin>>num1;
	cout<<"Enter Secand number"<<endl;
	cin>>num2;
    go();
	cout<<"The sum is: "<<sum(num1,num2);//function call.
	return 0;
}
int sum(int a,int b)//function defination
{
	int c = a+b;
	//formal parameter a and b will taken values from actual parameter num1,num2.
	return c;
}
void go(){
	cout<<"Addtion of two number"<<endl;
	
}
