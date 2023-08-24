#include<iostream>
using namespace std; 
//int e = 45; //Global variable
int main()
{
	int a, b,c,d; //Local Variable
	cout<<"Enter the Value of A: ";
	cin>>a;
	cout<<"Enter the Value of B: ";
	cin>>b;
	cout<<"Enter the Value of C: ";
	cin>>c;
	cout <<endl<<"The Addition of A,b and C is: "<< a+b+c;
//	cout <<endl<<"The Gbolab value of E: "<<::e; //  :: this is Scope resualation operator which is help to get Global variable value.

/*	
	float f = 36.2f; // 'f; and 'F' use for identify floating point value so now this work as floating point number not double.
	long double g = 36.2l; //'l' and 'L' for identify double value so now this ork as double value.
	// 36.2 compiler told that 36.2 is Double because in compiler by default dacimal value is double. 
	// so if we want to specify that 36.2 is float value the we have to write 36.2f so this is now use as floating point number not double.
	// 36.2f so we pass this value than this value is pass as Float value.
	

	cout<<"The value of F is: "<<f<<endl;
	cout<<"The value of G is: "<<g;
	
	cout<<"The Size of Operator of 36.2: "<<sizeof(36.2)<<endl; // By default it take it Double
	cout<<"The Size of Operator of 36.2f: "<<sizeof(36.2f)<<endl; // 'sizeof()'this take Float becase we write 'f' after value
	cout<<"The Size of Operator of 36.2F: "<<sizeof(36.2F)<<endl; //'sizeof()'this take Float becase we write 'F' after value
	cout<<"The Size of Operator of 36.2l: "<<sizeof(36.2l)<<endl; //'sizeof()'this take Long Double because we write 'l' after value
	cout<<"The Size of Operator of 36.2L: "<<sizeof(36.2L)<<endl; //'sizeof()'this take Long Double because we write 'L' after value
	// here f/F are same AND l/L are same mean F for Float and L for Long Double.

	*/
	
	
	
	
	return 0;
}