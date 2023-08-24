#include<iostream>
using namespace std;

int sum(int a, int b)
{
	static int c=0;//Execute only one time.
	c = c + 1; //c = 0+1 = 1//Next time wwhen function run, the value of c will be retain.
	           //c = 1+1 = 2//Next time wwhen function run, the value of c will be retain.
	           //c = 2+1 = 3//Next time wwhen function run, the value of c will be retain.
	           //c = 3+1 = 4//Next time wwhen function run, the value of c will be retain.
	           //c = 4+1 = 5//Next time wwhen function run, the value of c will be retain.
	           //c = 5+1 = 6//Next time wwhen function run, the value of c will be retain.
	//This is the working of Static variable.           
	return a*b+c;
}
int main()
{
	int x,y;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;
	sum(x,y);
	cout<<"Action Perform is: "<<sum(x,y)<<endl;
	cout<<"Action Perform is: "<<sum(x,y)<<endl;
	cout<<"Action Perform is: "<<sum(x,y)<<endl;
	cout<<"Action Perform is: "<<sum(x,y)<<endl;
	cout<<"Action Perform is: "<<sum(x,y)<<endl;
	return 0;
}
