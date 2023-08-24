#include<iostream>
using namespace std;
int main()
{
	//Pointer:- It is a data type which holds the address of other data type. 
	int a =3; //here we simply Declare the variable 'a' and initialize the value or assign the value '3'
	int* b = &a; 
	
	
     	//or
////	int *b;
////	b = &a;

	// here [int* b] hold the value of 'a' and '&a' is hold the address of a.
	//here &a hold the address of a using &a and here [int* b] is a pointer that so the value
	
	cout<<"The address of a in Main memory of computer is: "<<&a<<endl;
	                          //or
	cout<<"The address of a in Main memory of computer is: "<<b<<endl;   
	                          //value
	cout<<"The value at address of b in Main memory of computer is: "<<*b<<endl;
	
	///********Pointer to pointer******/////
	
	int** c = &b; //here it is a pointer to pointer variable and here 'c' holds the address and value of 'b'.
	cout<<"The address of b in main memory of computer is: "<<&b<<endl;
	cout<<"The address of b in main memory of computer is: "<<c<<endl;
	cout<<"The value at address value at(value(c))in main memory of computer is: "<<**c<<endl;
	
	return 0;                       
}
