#include<iostream>
#include<String.h>
using namespace std;
//Class and Structure:-

	//OOP's- Classes and Objects
	
	//c++ --> initially called --> C with Class by Stroustroup
	//Class --> extension of structure (in C)
	//Structure had Limitation
	// 1- members are public not private and protected as user Requairment
	//2- we can not use method(Function) inside the structure
	
	//classes --> Structure+more
	//classes --> can have method and properties
	//classes --> can make few member as private & few as public
	
	//Structure in c++ are typedefed
	//you can declare object along with the class declaration
	//like this:-
	/*
	class Employee //class definition
	{
		//code
	}Abhay;
	
	//Abhay.salary = 15000 make no sense if salary is private.
	*/
	
	//Nesting of member Function
	class binary
	{
		private:   //by default class ke member Private hote h so no need to write private:
		string s;
		void check_binary(void);
		
	
	public:
		void read(void);
		
		void ones_complement(void);
		void display_complement(void);
	};
	
void binary :: read(void)
{
	cout<<"Enter a binary number"<<endl;
	cin>>s;
}
void binary ::check_binary(void)
{
	int i;
	for(i = 0;i<s.length();i++) //s.lenght() it is a pre-defined function to calculate length
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{//s.at()it is a pre-defined function to check each point in string whether there is 0 and 1 is aviable.		{
			cout<<"Incorrect binary code"<<endl;
			exit(0);
		}
	}
}
void binary :: ones_complement(void)
{
	check_binary();
	int i;
	for(i = 0;i<s.length();i++)
	{
		if(s.at(i) == '0')
		{
			s.at(i) = '1';
		}
		else
		{
			s.at(i) = '0';
		}
	}
}
void binary :: display_complement(void)
{
	int i;
	cout<<endl;
	cout<<"Display Ones Complement of your Binary number"<<endl;
	for(i = 0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
}
int main()
{
	binary b;
	b.read();
//	b.check_binary(); //this is private function so you can not use it outside of classs.
	b.display_complement();
	b.ones_complement();
	b.display_complement();
	
	return 0;
}

