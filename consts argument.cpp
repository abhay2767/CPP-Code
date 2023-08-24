#include<iostream>
using namespace std;

int moneyReceive(int moneyCurrency, const float factor= 1.04)//1.04 is a const value)
//const value not change 
{
	return moneyCurrency*factor;
}
int main()
{
	int money=100000;
	const float factor = 1.04;
	cout<<"If you have Rs."<<money<<"in your bank Acccount, than you will receive Rs."
	<<moneyReceive(money)<<"in your bank Account"<<endl;
	cout<<"Only for VIP MEMBER:==If you have Rs."<<money<<"in your bank Acccount, than you will receive Rs."
	<<moneyReceive(money,1.1)<<"in your bank Account"<<endl;
 
	return 0;
	//
}
