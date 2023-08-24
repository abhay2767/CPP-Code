#include<iostream>
using namespace std;

inline int sum(int a, int b)//Inline function defination
//it is use for small type of the function just like that given below.
{
	return a*b;
}
int main()
{
	cout<<"Multification of a and b: "<<endl;
	int a,b;
	cout<<"Enter value of a and b repectively"<<endl;
	cin>>a>>b;
	sum(a,b);
	cout<<"Multification of a and b is: "<<sum(a,b);
	return 0;
}
