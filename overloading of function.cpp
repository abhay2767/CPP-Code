#include<iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
int volumn(double r, int h);
int volumn(int a);
int volumn(int l, int b, int h);

int main()
{
	cout<<"Addition of two number "<<add(3,6)<<endl<<endl;
	cout<<"Addition of three number "<<add(3,7,6)<<endl<<endl;
    cout<<"The volumn of cycinder "<<volumn(3,7,6)<<endl<<endl;
    cout<<"The volumn of cube "<<volumn(3)<<endl<<endl;
    cout<<"The volumn of rectangular "<<volumn(3,6)<<endl<<endl;
	return 0;
}
int add(int a, int b)
{
	cout<<"Using function with two argument"<<endl;;
	return a+b;
}
int add(int a, int b, int c)
{
	cout<<"Using function with three argument"<<endl;;
	return a+b+c;
}

//Calculate the volumn of a cylinder
int volumn(double r, int h)
{
	return(3.14*r*r*h);
}
//Calculate thr volumn of cube
int volumn(int a)
{
	return (a*a*a);
}
//Calculate the volumn of Rectangular box
int volumn(int l, int b, int h)
{
	return (l*b*h);
}
