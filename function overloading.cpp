#include<iostream>
using namespace std;
int addition(int a, int b);
int add(int a, int b, int c);
int main()
{
//	cout<<"Addition of two number "<<addition(3,6)<<endl;
	cout<<"Addition of three number "<<add(4,5,7)<<endl;
	return 0;
}
int addition(int a, int b)
{
	cout<<"Using function with two argument";
	return a+b;
}
int add(int a, int b, int c)
{
	cout<<"Using function with three argument";
	return a+b+c;
}
