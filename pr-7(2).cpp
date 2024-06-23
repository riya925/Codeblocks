#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
using namespace std;
class person
{
    string name;
    int code;
public:
    void getp()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter code:";
        cin>>code;
    }
    void putp()
    {
        cout<<endl<<"Name:"<<name<<endl<<"code"<<code<<endl;
    }
};
class account:virtual public person
{
    int pay;
public:
    void getac()
    {
        cout<<"Enter Amount to pay:";
        cin>>pay;
    }
    void putac()
    {
        cout<<"Pay:"<<pay<<endl;
    }
};
class admin:virtual public person
{

    float experience;
public:
    void getad()
    {
        cout<<"Enter Experience in years:";
        cin>>experience;
    }
    void putad()
    {
        cout<<"Experience:"<<experience<<endl;
    }
};
class master:public account,public admin
{
public:
    void getm()
    {
        getp();
        getac();
        getad();
    }
    void putm()
    {
        putp();
        putac();
        putad();
    }
};
void options()
{
    system("cls");
    cout<<"Press 1 For person"<<endl;
    cout<<"Press 2 For accountant"<<endl;
    cout<<"Press 3 For admin"<<endl;
    cout<<"Press 4 For master"<<endl;
    cout<<"press 5 For Exit"<<endl;
}
void suboptions()
{
    system("cls");
    cout<<"Press 1 For New Entry"<<endl;
    cout<<"Press 2 For Individual Details"<<endl;
    cout<<"Press 3 For Return"<<endl;
}
int main()
{
        int choice,subchoice;
        options();
        while(1)
        {
            cout<<"\n Enrollment  no. "<<" 170410107108 \n";
            cout<<"Enter Choice:";
            cin>>choice;
            if(choice==1)
            {
                suboptions();
                person p;
                while(1)
                {
                cout<<"Enter Choice:";
                cin>>subchoice;
                if(subchoice==1)
                {
                   cout<<"Enter Details For Person"<<endl;
                   p.getp();
                }
                else if(subchoice==2)
                {
                    p.putp();
                }
                else
                {
                    options();
                    break;
                }
                }
            }
            else if(choice==2)
            {
                suboptions();
                account ac;
                 while(1)
                {
                cout<<"Enter Choice:";
                cin>>subchoice;
                if(subchoice==1)
                {
                   cout<<"Enter Details For An Accountant"<<endl;
                   ac.getp();
                   ac.getac();
                }
                else if(subchoice==2)
                {
                    ac.putp();
                    ac.putac();
                }
                else
                {
                    options();
                    break;
                } } }
            else if(choice==3)
            {
                suboptions();
                admin ad;
                 while(1)
                {
                cout<<"Enter Choice:";
                cin>>subchoice;
                if(subchoice==1)
                {
                   cout<<"Enter Details For An Admin"<<endl;
                   ad.getp();
                   ad.getad();
                }
                else if(subchoice==2)
                {
                    ad.putp();
                    ad.putad();
                }
                else
                {
                    options();
                    break;
                }
                }
            }
            else if(choice==4)
            {
                suboptions();
                master m;
                 while(1)
                {
                cout<<"Enter Choice:";
                cin>>subchoice;
                if(subchoice==1)
                {
                   cout<<"Enter Details For Master"<<endl;
                   m.getm();
                }
                else if(subchoice==2)
                    m.putm();
                else
                {
                options();
                break;
                }
                }}
            else
             break;
        }
        return 0;
}
