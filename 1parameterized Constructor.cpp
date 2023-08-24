#include<iostream>
using namespace std;

class Complex
{
	int a, b;
	public:
		Complex(int x, int y)//creating Cnstructor with same name of class
		{
			a = x;
			b = y;
		}
		Complex(int x)//Constructor overloading
		{
			a = x;
			b = 0;
		}
		Complex()//multiple COnstructor overloading
		{
			a = 0;
			b = 0;
		}
		void printNum()
		{
			cout<<"Your Num is "<< a << "+" << b <<"i"<<endl; 
		}
};
int main()
{
	Complex c(4,6);
	c.printNum();
	
	Complex c1(4);
	c1.printNum();
	
	Complex c2;
	c2.printNum();
	return 0;
}
