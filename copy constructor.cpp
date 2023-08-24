#include<iostream>
using namespace std;

class Number
{
	int a;
	public:
		Number(){} //this is default constructor
		Number(int num)
		{
			a = num;
		}
		
		Number(Number &obj)//copy constructor
		{
			cout<<"copy constructor call"<<endl;
			a = obj.a;
		}
		
		void display()
		{
			cout<<"The number for this object is "<< a <<endl;
		}
};

int main()
{
	Number n1,n2,n3(12);
	n1.display();
	n2.display();
	n3.display();
	
	Number z1(n3);
	z1.display();
	return 0;
	
}
