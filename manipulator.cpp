#include<iostream>
#include<iomanip> //in setw manipulator we also have to use the #incude<iomanip> header file.
using namespace std;
int main()
{
	int a = 1, b = 10, c = 100;
	cout<<"Without Setw: "<<a<<endl; // without Setw() manipulator
	cout<<"Without Setw: "<<b<<endl; // endl is also a manipulator
	cout<<"Without Setw: "<<c<<endl;
	
	cout<<"With Setw:    "<<setw(3)<<a<<endl; //setw is a manipulator and here in () we give the value to ie-1,2,3,number of place we want to space.
	cout<<"With Setw:    "<<setw(3)<<b<<endl;
	cout<<"With Setw:    "<<setw(3)<<c<<endl;
	return 0;
}
