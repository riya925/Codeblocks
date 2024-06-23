/*Pratical-4:Class and object

Q:1 Implement a class to get and print information about student/employee extend above problem to implement an array of object.*/

#include<iostream>
using namespace std;
class student
{
	private:

			char name[20],regd[10],branch[10];
			int sem;
	public:
		void input();
		void display();


};
void student::input()
{
    cout<<"\n Enrollement no. : "<<" 170410107108 \n";
	cout<<"\n Enter Name:";
	cin>>name;
	cout<<"\n Enter Regdno.:";
	cin>>regd;
	cout<<"\n Enter Branch:";
	cin>>branch;
	cout<<"\n Enter Sem:";
	cin>>sem;
}
void student::display()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Regdno.:"<<regd;
	cout<<"\n Branch:"<<branch;
	cout<<"\n Sem:"<<sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}

// Q:2 write a program to implement student class and allocate object of student class dynamically.
