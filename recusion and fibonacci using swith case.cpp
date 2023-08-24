#include<iostream>
using namespace std;
int factorial(int n);
int fibonacci(int n);
int main()
{
	int number;
	cout<<"Enter your Choice!"<<endl;
	cout<<"Enter 1 to find Factorial:"<<endl;
	cout<<"Enter 2 to find Fibonacci:"<<endl;
	cin>>number;
	switch(number)
	{
		case 1:
			int n;
			cout<<"Wellcome to Factorial"<<endl;
			cout<<"Enter number to calculate factorial:- ";
			cin>>n;
			cout<<factorial(n);
			break;
		case 2:
			int n1;
			cout<<"Wellcome to Fibonacci"<<endl;
			cout<<"Enter number to calculate fibonacci:- ";
			cin>>n1;
			cout<<fibonacci(n1);
			break;
		default:
		    cout<<"Enter Valid number 1 and 2!";
			break;	
	}
	return 0;
}

int factorial(int n)
{
	if( n<=1 && n<=0)
	{
		 return 1;
	}
	return n*factorial(n-1);
} 
int fibonacci(int n) 
{
	if(n <2 )
	{
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}
