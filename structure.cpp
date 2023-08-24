#include<iostream>
using namespace std;

struct employee
{
	/* Data */
	int eId;
	char favName;
	float salary;
};
// typedef is use to set struct student = Emp; 'Emp = Any Name'
typedef struct student
{
	/* Data */
	int eId;
	char favName;
	float salary;
}Emp;

int main()
{
	Emp Abhay;
	Abhay.eId = 10;
	Abhay.favName = 'S';
	Abhay.salary = 12500;
	cout<<"Data of Abhay1:"<<endl;
	cout<<Abhay.eId<<endl;
	cout<<Abhay.favName<<endl;
	cout<<Abhay.salary<<endl;
	
	
	//Create different different Employee like- Abhay,Rahul. 
	
	
	struct employee Rahul;
    	//Data of Abhay
	Abhay.eId = 22612;
	Abhay.favName = 'A';
	Abhay.salary = 10000;
		//Data of Rahul
	Rahul.eId = 21689;
	Rahul.favName = 'R';
	Rahul.salary = 15000;
	//Print data of Abhay.
	
	cout<<"Date of Abhay: "<<endl;
	cout<<"The Value is: "<<Abhay.eId<<endl;
	cout<<"The Value is: "<<Abhay.favName<<endl;
	cout<<"The Value is: "<<Abhay.salary<<endl;
	//Print data of Rahul.
    cout<<"Data of Rahul: "<<endl;
	cout<<"The Value is: "<<Rahul.eId<<endl;
	cout<<"The Value is: "<<Rahul.favName<<endl;
	cout<<"The Value is: "<<Rahul.salary<<endl;
	return 0;
}
