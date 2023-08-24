#include<iostream>
using namespace std;

class C2;

class C1
{
	int val1;
	friend void exchange(C1 &, C2 &);
	public:
		void indata(int a)
		{
			val1 = a;
		}
		void display(void)
		{
			cout<< val1 <<endl;
		}
		
};
class C2
{
	int val2;
	public:
		void indata(int a)
		{
			val2 = a;
		}
		void display(void)
		{
			cout<< val2 <<endl;
		}
		friend void exchange(C1 &, C2 &);
};

//call by reference we swap data of C1 and C2
//Trick to swap 2 number a and b
/*
	temp = a;
	a = b;
	b = temp;
*/
void exchange(C1 &x, C2 &y)
{
	int tmp = x.val1;
	x.val1 = y.val2;
	y.val2 = tmp;
}
int main()
{
	C1 oc1;
	oc1.indata(5);
	C2 oc2;
	oc2.indata(10);
	
	exchange(oc1, oc2);
	cout<<"The value of c1 after exchange become: ";
	oc1.display();
	cout<<"The value of c2 after exchange become: ";
	oc2.display();
	return 0;
}
