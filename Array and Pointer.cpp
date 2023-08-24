#include<iostream>
using namespace std;
int main()
{
/*	int marks[5] = {23,25,26,90,48};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	cout<<marks[4]<<endl;
*/	
/////-----------Another way to store values in Array-------------////////
	int mathmarks[5];
	mathmarks[0] = 12;
	mathmarks[1] = 52;
	mathmarks[3] = 62;
	mathmarks[4] = 82;
	mathmarks[5] = 92;
	cout<<"Math marks is given: "<<endl;
	cout<<mathmarks[0]<<endl;
	cout<<mathmarks[1]<<endl;
	cout<<mathmarks[2]<<endl;
	cout<<mathmarks[3]<<endl;
	cout<<mathmarks[4]<<endl;
	
	//you can also change the values of Array//
	cout<<"Here we change the value of array"<<endl;
	mathmarks[2] = 2000;
	cout<<mathmarks[2]<<endl;
	cout<<mathmarks[3]<<endl;
	
/////-----------Another way to store values in Array using for loop-------------////////
    int i;
    cout<<"Print marks sequence vice:"<<endl;
    for(i=0; i<=5; i++)
    {
    	cout<<"The value of marks "<<i<<" is "<<mathmarks[i]<<endl;
	}
	
//-------------Pointer And Array-------------////////

    int*p = mathmarks;
    cout<<"Pointer in Array to print the marks"<<endl;
	cout<<"The value of mathmarks[0] is "<<*p<<endl;	
	cout<<"The value of mathmarks[1] is "<<*(p+1)<<endl;
	cout<<"The value of mathmarks[2] is "<<*(p+2)<<endl;
	cout<<"The value of mathmarks[3] is "<<*(p+3)<<endl;
	cout<<"The value of mathmarks[4] is "<<*(p+4)<<endl;
	cout<<"The value of mathmarks[5] is "<<*(p+5)<<endl;
	
	
	cout<<*p<<endl;
	cout<<*(p++)<<endl;
	cout<<*p<<endl;
	cout<<*(++p)<<endl;
//	cout<<*p<<endl;
	
	return 0;
}
