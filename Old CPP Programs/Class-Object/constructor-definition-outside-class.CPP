#include<iostream.h>
#include<conio.h>
#include<string.h>
/*
	Constructor Definition Outside Class
*/
class Student
{
	public:
	char name[10];
	int age;
	Student();
	Student(char[10],int);
	void checkEligibility();
};
Student::Student()
{
		strcpy(name,"Dhara");
		age=19;
}
Student::Student(char stu_name[10],int stu_age)
{
		strcpy(name,stu_name);
		age=stu_age;
}
void Student::checkEligibility()
{
	if(age>18)
	{
		cout<<"Hello "<<name<<", you are aligible for vote"<<endl;
	}
}
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
	Student st1(name,age);
	st1.checkEligibility();
	getch();
}