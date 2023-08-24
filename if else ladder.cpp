#include<iostream>
using namespace std;
int main()
{
	//cout<<"Abhay";
	int age;
	cout<<"Tell your age: ";
	cin>>age;
	if((age<18) && (age>0))
	{
		cout<<"Sorry! Yor can not come to the Party because you are less than 18.";
	}
	else if(age == 18)
	 {
		cout<<"You are a kid and you will get a kid party pass.";
	}
	else if(age<1)
	{
		cout<<"You are not yet born";
	}
	else
	{
		cout<<"Wellcome! You can come to the Party.";
	}
	return 0;
}
