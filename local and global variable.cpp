#include<iostream>
using namespace std;
int c = 10, d = 10;//global variable declaration & initialaztion
int main()
{
	int a = 5, b = 5;//Local Variable declaration & initialization
	cout <<"Addition: "<<a+b;
	cout <<"\nAddition: "<<c+d;
	return 0;
}