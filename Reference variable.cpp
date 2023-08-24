#include<iostream>
using namespace std;
int main()
{
//********Float, Double and Long Double Literals*******//	
//********Reference variable********//    
	float Abhay = 23; // here Abhay has two name Abhay and Dubey. orignal variable is Abhay, has 23 and now Dubey have also 23 value using '&'.
	float & Dubey = Abhay;
	cout<<Abhay<<endl;
	cout<<Dubey;

	return 0;
}