#include<iostream>
using namespace std;

class Complex
{
	int a, b;
	public:
		Complex(int x, int y);//constructor declaration
		void printNum()
		{
			cout<<"Your number is "<< a <<" + "<< b <<"i"<<endl;
		}
};

Complex :: Complex(int x, int y)//this is parameterized constructor as it accept 2 parameter.
{
	a = x;
	b = y;
}

int main()
{
	//Implecit call
	Complex a(4,6);
	
	//Explecit call
	Complex b = Complex(5,7);
	a.printNum();
	b.printNum();
	

	return 0;
}
