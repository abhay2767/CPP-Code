#include<iostream>
using namespace std;

class BankDeposite
{
	int principle;
	int years;
	float intrestRate;
	float returnValue;
	
	public:
		//created multiple constructor overload
		BankDeposite(){}// this is default constructor
		BankDeposite(int p, int y, float r); // 'r' can be a value like 0.04
		BankDeposite(int p, int y, int r); // 'r'  can be a value like 14
		void show();
};

BankDeposite :: BankDeposite(int p, int y, float r)
{
	principle = p;
	years = y;
	intrestRate = r;
	returnValue = principle;
	int i;
	for(i = 0; i< y; i++)
	{
		returnValue = returnValue * (1+intrestRate);
	}
	
}

BankDeposite :: BankDeposite(int p, int y, int r)
{
	principle = p;
	years = y;
	intrestRate = float(r)/100;
	returnValue = principle;
	int i;
	for(i = 0; i< y; i++)
	{
		returnValue = returnValue * (1+intrestRate);
	}
	
}

void BankDeposite :: show()
{
	cout<<"The Principle amount was "<<principle<<endl
	<<"Return value after "<<years<<" years"
	<<" is "<<returnValue<<endl<<endl;
}
int main()
{
	BankDeposite bd1, bd2, bd3;
	int p , y;
	float r;
	int R;
	
	//bd3.show();// it return garbage value.
	
	
	cout<<"Enter the value of p,y and r"<<endl;
	cin>>p>>y>>r;
	bd1 = BankDeposite(p,y,r);
	bd1.show();
	
	cout<<"Enter the value of p,y and R"<<endl;
	cin>>p>>y>>R;
	bd2 = BankDeposite(p,y,R);
	bd2.show();
	return 0;
}
