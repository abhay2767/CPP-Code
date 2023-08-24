#include<iostream>
using namespace std;
int main()
{
	int a =4, b=5; // here a = 4 and b = 5 '=' is use for Assign value so that is a Assignment operator.
	cout<<"Airthmatic Operators: "<<endl; // basically it is use for perform operation ie. + - * / etc
	//Airthmatic operator
	cout<<a+b<<endl; // print 9
	cout<<a-b<<endl; // print -1
	cout<<a*b<<endl; // print 20
	cout<<a/b<<endl; // print 0
	cout<<a%b<<endl; // print 4 
	cout<<a++<<endl; // print 4 
	cout<<a--<<endl; // print 5
	cout<<++a<<endl; // print 5
	cout<<--a<<endl; // print 4
	cout<<"Comparison Operators: "<<endl; // basically it is use for check the value is same or not mean check relation
	cout<<(a==b)<<endl;
	cout<<(a!=b)<<endl;
	cout<<(a<=b)<<endl;
	cout<<(a>=b)<<endl;
	cout<<(a<b)<<endl;
	cout<<(a>b)<<endl;
	cout<<"Logical Operators: "<<endl; 
	// basically it is use in Logical  AND[&&] to check both condition are true or not if true than print 1 or not than 0.
	cout<<((a==b) && (a<b))<<endl;
	// Logical OR[||] to check any one conddition is true than print 1 or not to print 1.
	cout<<((a==b) || (a<b))<<endl;
	// Logical Not[!] to check the result of the condition and change to other like result is 1 than [!] this will print 0.
	cout<<(!(a==b))<<endl;
}