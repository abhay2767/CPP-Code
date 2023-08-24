#include<iostream>
using namespace std;
int glow = 6;//global variable
void sum()
{
	int a;
	glow = 20;
	cout <<"\nglow\n"<<glow;
}
int main()
{
	int a = 4;
	int b = 8;
	float pi = 3.14;
	char c = '@';
	int glow = 5; //local variable
	glow = 10;
	bool value = false; // boolean data type true = 1 and false = 0
	cout<<"The value of bool\n"<<value;
	cout <<"\nthe glow\n"<<glow;
	sum();

	cout <<"\nthis is addison of a and b\n" <<a+b;
	cout <<"\nThe value of pi is: \n"<<pi;
	cout <<"\nThe value of c\n"<<c;
//	cout <<"\nthe value of glow\n"<<glow;
	return 0;
}