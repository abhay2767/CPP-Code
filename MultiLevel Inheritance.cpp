#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_number;
		public:
			void set_roll_number(int);
			void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
	roll_number = r;
}
void Student :: get_roll_number()
{
	cout<<"The roll number is: "<<roll_number<<endl;
}


class Exam: public Student{
	protected:
		float maths;
		float physics;
		public:
			void set_marks(float,float);
			void get_marks(void);
};

void Exam :: set_marks(float m1,float m2)
{
	maths = m1;
	physics = m2;
}

void Exam :: get_marks()
{
	cout<<"the marks obtained in maths are: "<<maths<<endl;
	cout<<"the marks obtained in physics are: "<<physics<<endl;
}

class Result : public Exam{
	float percentage;
	public:
	void display()
	{
		get_roll_number();
		get_marks();
		cout<<"Your percentage is "<<(maths+physics)/2<<endl;
	}
	
};

int main()
{
	/*
		Notes:-
			If we Inheriting B from A and C from B:[A-->B-->C]
			1- A is the class for B and B is the Base class for C
			2- A-->B-->C is called Inheritance Path. 
	*/
	
	
	
	Result Abhay;
	Abhay.set_roll_number(01);
	Abhay.set_marks(94.0,90.0);
	Abhay.display();
	return 0;
}
