#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
	int a;
	cout<<"Enter Value to find Fibonacci:- ";
	cin>>a;
	cout<<"Fibonacci of "<<a<<" is:- "<<fibonacci(a); 
	return 0;
}
int fibonacci(int n) 
{
	if(n <2 )
	{
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}
