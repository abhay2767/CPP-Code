#include<iostream>
using namespace std;


class Employee
{
	private: 
		int a,b,c;
	public:
		int d,e;
		void setData(int a1, int b1, int c1);//function declaration
		void getData()//function declaration and defination
		{
			cout<<"the value of a is:"<<a<<endl;
			cout<<"the value of b is:"<<b<<endl;
			cout<<"the value of c is:"<<c<<endl;
			cout<<"the value of d is:"<<d<<endl;
			cout<<"the value of e is:"<<e<<endl;
		}
};

void Employee :: setData(int a1, int b1, int c1)//function definition
//(::  = Scope resulation operator) 
//this will tell the compiler that setDatw() function in declared in Employee Class
{
	a = a1;
	b = b1;
	c = c1;
}
int main()
{
	Employee Abhay;
//	Abhay.a = 100; //show error because 'a','b','c' is declare as Private.
	Abhay.e = 34;// use can dictectly Access 'd','e' because it is Public.
	Abhay.d = 89;
	
	Abhay.setData(1,2,3);//function call
	Abhay.getData();//function call
	return 0;
}
