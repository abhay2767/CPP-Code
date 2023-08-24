#include<iostream>
using namespace std;


class Employee//Base class
{
	public:
	int id;
	float salary;
		Employee(int impId)
		{
			id = impId;
			salary = 50.5;
		}
	Employee(){}//default constructor
};

//Derived class syntaxx
/*
class Derived class_name : {{visibility_mode}} Base class_name
{
	class member/method..etc
}

note:-
	1- Default visibility mode is Private
	2- Private Visibility mode:
							public member of Base class become Private member of Derived class.
	3- Public Visibility mode:
							public member of Base class become public member of Derived class.
	4- Private member of Base class will never Inherit or never becomes Member of Derived class.
*/
class Programmer : public Employee
{
	public: 
	Programmer(int impId)
	{
		id = impId;
	}
	int language_code = 21689;	
	void getData()
	{
		cout<<id<<endl;
	}
};

int main()
{
	Employee Abhay(1),Dubey(2);
	cout<<Abhay.salary<<endl;
	cout<<Dubey.salary<<endl;
	
	Programmer pro(100);
	cout<<pro.language_code<<endl;
	cout<<pro.id<<endl;
	pro.getData();
	return 0;
}
