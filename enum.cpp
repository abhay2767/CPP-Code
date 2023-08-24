#include<iostream>
using namespace std;
int main()
{
	enum Meal {Breakfast, Lunch, Dinner};
	enum colors{red=5, black};

	cout<<"Mean: "<<endl<<Breakfast<<endl<<Lunch<<endl<<Dinner<<endl;
	cout<<"Colors: "<<endl<<red<<endl<<black<<endl;	
	return 0;
}
