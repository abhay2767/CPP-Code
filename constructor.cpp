#include<iostream>
using namespace std;


class Complex
{
	int a,b;
	public:
		//creating a constructor
		//constructor is a special member function with same name as of the class.
		//it is used to initialize the object of its class.
		//it is autometically invoke(Execute) whenever an object is created.
		Complex(void);//constructor declaration
		void printNum()
		{
			cout<<"Your number is "<< a <<" + "<< b <<"i"<<endl;
		}
};
Complex :: Complex(void)//this is default constructor as it accepts no parameter
{
	a = 10;
	b = 5;
}
int main()
{
	Complex c,c1,c2;
	c.printNum();
	c1.printNum();
	c2.printNum();
	return 0;
}

//Properties of constructor
/*
	1- It should be declared in the public section of the class.
	2- They are autometicaly invoked whenever the object is created.
	3- They can not return values and do not have return type.
	4- It can have default arguments.
	5- We can not refer to their address.
	
*/
