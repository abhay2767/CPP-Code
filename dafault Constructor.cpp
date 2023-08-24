#include<iostream>
using namespace std;

class Simple
{
	int data1, data2, data3;
	 public:
	 	Simple(int a, int b, int c = 5)//constructor with default argument
	 	//here we pass value of 'c' as default argument if in main fucntion agar hum c ki value pass nhi krenge to ye dafault value use hogi.
	 	{
	 		data1 = a;
	 		data2 = b;
	 		data3 = c;
		}
		void printNum();
};

void Simple :: printNum()
{
	cout<<"The value of data is "<< data1 <<" , "<<data2<<" and "<< data3<<endl;
}

int main()
{
	Simple s(1,4);
	s.printNum();
	
	
}
