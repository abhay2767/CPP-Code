#include<iostream>
using namespace std;


class Employee //Employee is just like a data type ie- int, float, chat...
{
	int id; //these are private defaultly
	int salry;
	public:
		void setID(void)
		{
			salry = 122;
			cout<<"Enter id of Employee"<<endl;
			cin>>id;
		}
		void getId(void)
		{
			cout<<"The id of Employee is "<<id<<endl;
			cout<<"The salary is "<<salry<<endl;
		}
};
int main()
{
//	Employee Abhay,Dubey,Deepak,Shivam;//there are only 4 oject we create in this first way.
//	Abhay.setID();
//	Abhay.getId();
	
	
	Employee fb[10];//here we create an array of 10(object) size to take the at the 10 size.
	int i;
	for(i = 0;i<10;i++)
	{
		fb[i].setID();
		fb[i].getId();
	}
	return 0;
}
