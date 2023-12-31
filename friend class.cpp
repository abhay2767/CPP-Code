#include<iostream>
using namespace std;

// Forwword declaration
class Complex;

class Calculator
{
	public:
		int add(int a, int b)
		{
			return (a+b);
		}
		int sumRealComplex(Complex, Complex); // declation
		int sumCompComplex(Complex, Complex); // declation
};
class Complex
{
	int a, b;
	//Individually declaring functions as friends
	
	//	friend int Calculator ::  sumRealComplex(Complex o1, Complex o2);
	//	friend int Calculator ::  sumCompComplex(Complex o1, Complex o2);
	
	//Aliter: Declaring the entire calculator class as friend
	friend class Calculator;
	
	public:
		void setNum(int n1, int n2)
		{
			a = n1;
			b = n2;
		}
		
		void printNum()
		{
			cout<<"Your Num is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)//definition
		 {
		 	return (o1.a + o2.a);
		 }
int Calculator :: sumCompComplex(Complex o1, Complex o2)//definition
		 {
		 	return (o1.b + o2.b);
		 }
int main()
{
	Complex o1,o2;
	o1.setNum(1,4);
	o2.setNum(5,7);
	Calculator calc;
	int res;
	res = calc.sumRealComplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	
	int resc;
	resc = calc.sumCompComplex(o1,o2);
	cout<<"The sum of Complex part of o1 and o2 is "<<resc<<endl;
	return 0;
}
