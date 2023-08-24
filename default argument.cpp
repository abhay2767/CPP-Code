#include<iostream>
using namespace std;

int moneyReceive(int moneyCurrency, float factor= 1.04)//1.04 is a default value)
{
	return moneyCurrency*factor;
}
int main()
{
	int money=100000;
	cout<<"If you have Rs."<<money<<"in your bank Acccount, than you will receive Rs."
	<<moneyReceive(money)<<"in your bank Account"<<endl;
     //here factor value is 1.04 than output is 100004(Here 1.04 is default value)
	cout<<"Only for VIP MEMBER:==If you have Rs."<<money<<"in your bank Acccount, than you will receive Rs."
	<<moneyReceive(money,1.1)<<"in your bank Account"<<endl;
	//here factor value is given by user is 1.1 than output is 100010 (here we give the value)
	//so this mean if you give the value than the default value will change otherwise default value take.) 
	return 0;
	//
}
