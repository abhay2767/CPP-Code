#include<iostream>
using namespace std;
//Complex number(Addtion)
// 1 + 4i
//+5 + 8i
//-------
// 6 + 12i


class Complex{
	int a, b;
	public:
		void setNum(int n1, int n2)
		{
			a = n1;
			b = n2;
		}
		
		friend Complex sumComplex(Complex o1, Complex o2);//this will tell the complier that
		// we give the acces to use class private object and property 
		
		void printNum()
		{
			cout<<"Your Num is "<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex sumComplex(Complex o1, Complex o2)
{
	Complex o3;
	o3.setNum((o1.a + o2.a), (o1.b + o2.b));
	return o3;
}
int main()
{
	Complex c1,c2,sum;
	c1.setNum(1,4);
	c1.printNum();
	
	c2.setNum(5,8);
	c2.printNum();
	
	sum = sumComplex(c1,c2);
	sum.printNum();
	return 0;	
}
/*
1 - Not in the scope of class.
2 - since it is not in the scope of class, it can not be called from the object of that class
    i.e- c1.sumComplex() == INVALID XXX
3 - can be invoked without the help of any object.
4 - Usually contans the objects as arguments.
5 - can be declared inside public or private section of the class.
6 - It can not access the members directly by their names and need object_name.member_name
	to access ant member.    
