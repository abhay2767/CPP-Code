#include<iostream>
using namespace std;

class Employee
{
	int id;
	static int count; //static variable by deafualt initialized with '0' means = count =0
	
	public:
		void setData(void)
		{
			cout<<"Enter the id for "<<count<<" Employee"<<endl;
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"The id of "<<count<<" Employee is "<<id<<endl<<endl;
		//	cout<<"The id of the Employee is:- "<< id <<" and this is Employee number "<<count<<endl;
		}		
		static void getCount(void)
		{
			cout<<"The total number of Employee is "<<count<<endl;
		}
};

int Employee :: count;//here 'count' static variable which is also declare outside of class.
//it take memory at once and update hota jayega
int main()
{
	Employee Abhay,Dubey,Deepak;
	Abhay.setData();
	Abhay.getData();
	Dubey.setData();
	Dubey.getData();
	Deepak.setData();
	Deepak.getData();
	Employee::getCount();
//	Employee Serial_No;
//	Serial_No.getCount();
	
}
