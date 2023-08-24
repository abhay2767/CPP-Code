#include<iostream>
using namespace std;
int main()
{
	int a=3, b =4;
	int c = a*5+b-45+87;
	       // (a*5)+b-45+87
	       // (3*5)+4-45+87
	       // (15)+4-45+87
	       // (15+4)-45+87
	       // (19)-45+87
	       // (19-45)+87
	       // (-26)+87
	       // (-26+87)
	       //=> 61 
	cout<<"Calculate value of C: "<<c;
}
