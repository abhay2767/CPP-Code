#include<iostream>
using namespace std;
int main()
{
//	cout<<"Abhay";
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    switch(age)
    {
    	case 16:
    		cout<<"You are 16."<<endl;
    		break;
    		case 18:
    			cout<<"You are 18."<<endl;
    			break;
    			case 20:
    				cout<<"You are 20."<<endl;
    				break;
    			default:
    				cout<<"Enter Valid Number! "<<endl;
    				break;
	}
	cout<<"Successfully Done Swithch case...";

	return 0;
}
