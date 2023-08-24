#include<iostream>
using namespace std;
int sum(int a, int b);
void swap(int *a, int *b);
void swapReferenceVariable(int &a, int &b);

int main()
{
	cout<<"Call by value "<<endl;
	int n1,n2;
	cout<<"Enter value of Two Number"<<endl;
	cin>>n1>>n2;
	sum(n1,n2);
	cout<<"Addition of two number: "<<sum(n1,n2)<<endl<<endl;
	
	
    cout<<"Call By reference"<<endl;
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl<<endl;
    
    
    cout<<"Pointer Rference in C++"<<endl;
    int x = 6, y = 7;
	cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    swapReferenceVariable(x,y);
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl<<endl;
	return 0;
	
}
int sum(int a, int b)
{
	int c = a+b;
	return c;
}

void swap(int *a, int *b)
     {
	int temp; // temp  a   b
	temp = *a; //    4  4   5
	*a = *b;    //    4  5   5
	*b = temp; //    4  5   4 
     }
 
void swapReferenceVariable(int &a, int &b) //Call by reference using c++ reference variables
     {
     int temp; // temp  a   b
     temp = a; //    4  4   5
	 a = b;    //    4  5   5
	 b = temp; //    4  5   4 
     }    
