#include<iostream>
using namespace std;

class Base1
{
	protected:
		int a=10;
	private:
		int b=20;
	public:
		int c=30;
};
//for a protected member
/*					Public derivation		Private Derivation 		Protected derivation
	private member	Not Inherited			Not Inherited			Not Inherited
	protected mem	Protected				Private					Protected
	public member	Public					Private					Protected
*/
class Derive1 : /*public*/  /*private*/ protected Base1
{
	
};

int main()
{
	Base1 b;
	Derive1 d;
	cout<<b.c;
	//cout<<d.a // will not work since int a is protected in both except Base1  and Derive1 class.
	return 0;
}
