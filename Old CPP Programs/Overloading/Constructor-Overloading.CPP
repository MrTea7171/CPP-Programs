#include<iostream.h>
#include<conio.h>
/* 
	Constructor Overloading
*/
class Student
{
	public:
	char name[10];
	int age;
	Student()
	{
			name="Dhara";
			age=16;
	}
	Student(char stu_name,int stu_age)
	{
			name=stu_name;
			age=stu_age;
	}
	void checkEligibility()
	{
		if(age>18)
		{
			cout<<"Hello "<<name<<", you are aligible for vote"<<endl;
		}
	}
};
void main()
{
	clrscr();
	Student st;
	st.checkEligibility();
	int age;
	char name[10];
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter age : ";
	cin>>age;
	Student st(name,age);
	st.checkEligibility();
	getch();
}