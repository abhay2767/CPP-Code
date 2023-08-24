#include<iostream>
using namespace std;
int main()
{
	//cout<<"Abhay";
	int age;
	cout<<"Tell your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Wellcome! You can come to the Party.";
	}
	else {
		cout<<"Sorry! Yor can not come to the Party because you are less than 18.";
	}
	return 0;
}
