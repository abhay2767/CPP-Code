#include<iostream>
using namespace std;

int count = 0; //Glowal Variable- declaration and initialization.
//Distructor never taked an argument nor does not return any value.
class num
{
	public:
		num()//Constructor 
		{
			count++;
			cout<<"This is the time when constructor called for object number "<<count<<endl;
		}
		
		~num()//Distructor
		{
			cout<<"This is the time when Distructor called for object number "<<count<<endl;
			count--;
		}
};

int main()
{
	cout<<"We are inside our Main()"<<endl;
	cout<<"Creating first obejct 'n1' "<<endl;
	num n1;
	{
		cout<<"Entering this block"<<endl;
		cout<<"Creating two more object "<<endl;
		num n2, n3;
		cout<<"Existing thid block "<<endl;
	}
	cout<<"Back to Main() "<<endl;
	return 0;
}
