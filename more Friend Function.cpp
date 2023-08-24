#include<iostream>
using namespace std;

//forword declaration 
class Y;
 
class X
{
	int data;
	public:
		void setVal(int value)
		{
			data = value;
		}
	friend void add(X,Y);	
};

class Y
{
	int num;
	public:
		void setVal(int value)
		{
			num = value;
		}
	friend void add(X,Y);
};

void add(X o1, Y o2)
 {
 	cout<<"Summing data of X and Y object geves me "<<o1.data + o2.num;
 }
 
 int main()
 {
 	X a1;
 	a1.setVal(3);
 	
 	Y b1;
 	b1.setVal(5);
 	
 	add(a1,b1);
 	return 0;
 }
