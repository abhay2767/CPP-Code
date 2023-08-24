#include<iostream>
#include<string>//use this header file for take String operation.
using namespace std;
int main()
{
	string text ="Abhay is a MCA Student";//sting variable text is declare and initialize.
	cout<<"String Text is:- "<<text<<endl;
	string firstname = "Abhay";
	string lastname = "Dubey";
//	string fullname = firstname +" "+ lastname;//Concatnation for add two string.
	string fullname = firstname.append(lastname);//Append for add two string.
	//Addition of two number using string output is 510 not 15.
	string a = "5";
	string b = "10";
	string c = a + b;
	cout<<"Addition of two number using String:- "<<c<<endl;
	
	string name = "Abhay Dubey";
	cout<<"Calculate lenght:- "<<name.length()<<endl;//variabel name.lenght() for calulate length.
	cout<<"Calculate lenght:- "<<name.size()<<endl;//variabel name.size() also for calulate length.
	cout<<"Addition of two String:- "<<fullname<<endl;;
	
	string text2 = "Abhay";
	cout<<"Acces string from its index number:- "<<text2[1]<<endl;//it will acces string by using index number.
	
	string changeString = "Abhay";
	changeString[1] = 'd';//change string at point given in [0] using index in 'd'.
	cout<<"Change String using index:- "<<changeString<<endl;
	
	string text1;
	cout<<"Enter String text:- ";
	//cin>>text1; // for print online word of paragraph(string).
	getline(cin,text1);// for print whole paragraph.
	cout<<"The Given String is:- "<<text1;

	return 0;
}
