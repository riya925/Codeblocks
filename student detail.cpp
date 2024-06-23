#include<iostream>
using namespace std;

class employee
{
    int sid,sem;
    char dept[30],col[50];
    string name[20],add[40];
    public:
    void get()
    {
        cout<<"\n Enter the information of student.... \n";
        cout<<"\n Enter the student's id: ";
        cin>>sid;
        cout<<"\n Enter the student's name: ";
        cin>>name;
        cout<<"\n Enter the student's department: ";
        cin.getline(dept,30,'\n');
        cout<<"\n Enter the student's current sem: ";
        cin>>sem;
        cout<<"\n Enter the student's address: ";
        cin>>add;
        cout<<"\n Enter student's college: ";
        cin.getline(col,50,'\n');
    }
    void print()
    {
        cout<<"\n Student's id is: "<<sid;
        cout<<"\n Student's name is: "<<name;
        cout<<"\n Student's department is: "<<dept;
        cout<<"\n Student's semester is: "<<sem;
        cout<<"\n Student's address is: "<<add;
        cout<<"\n Student's college is: "<<col;
    }
};
int main()
{
    employee e1;
    e1.get();
    e1.print();
    return 0;
}
