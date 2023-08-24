#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	//factorial of a number.
	//6! = 6*5*4*3*2*1 = 720.(! identity of factorial)
	//4! = 4*3*2*1 = 2
	//n! = n*(n-1)! 
	int n;
	cout<<"Enter the Number"<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is:- "<<factorial(n);
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




