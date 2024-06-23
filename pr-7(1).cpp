#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
using namespace std;
class staff
{
    int code;
    string name;
public:
    void gets(int dcode)
    {
        code=dcode;
        cout<<endl<<"Name:";
        cin>>name;
    }
    void disps()
    {
        cout<<setw(10)<<code<<setw(10)<<name;
    }
    int getcode()
    {
        return code;
    }
};
class teacher:public staff
{
    string sub;
    string publication;
public:
    void gett(int dcode)
    {
        gets(dcode);
        cout<<"Subject:";
        cin>>sub;
        cout<<"Publication:";
        cin>>publication;
    }
    void dispt()
    {
        disps();
        cout<<setw(10)<<sub<<setw(15)<<publication<<endl;
    }
};
class officer:public staff
{
    char grade;
public:
    void geto(int dcode)
    {
        gets(dcode);
        cout<<"Enter Grade(A/B/C):";
        cin>>grade;
    }
    void dispo()
    {
        disps();
        cout<<setw(10)<<grade<<endl;
    }
};
class typist:public staff
{
    int speed;
public:
    void getty(int dcode)
    {
        gets(dcode);
        cout<<"Enter Speed:";
        cin>>speed;
    }
    void dispty()
    {
        disps();
        cout<<setw(10)<<speed;
    }
};
class casual:public typist
{
    int wages;
public:
    void getca(int dcode)
    {
        getty(dcode);
        cout<<"Daily Wages:";
        cin>>wages;
    }
    void dispca()
    {
        dispty();
        cout<<setw(10)<<wages<<endl;
    }
};
class regular:public typist
{
public:
    void getr(int dcode)
    {
        getty(dcode);
    }
    void dispr()
    {
        dispty();
        cout<<endl;
    }
};
void options()
{
    system("cls");
    cout<<"Press 1 For Teacher"<<endl;
    cout<<"Press 2 For Officer"<<endl;
    cout<<"Press 3 For Typist"<<endl;
    cout<<"Press 4 For Exit"<<endl;
}
void suboptions()
{
    system("cls");
    cout<<"Press 1 For New Entry"<<endl;
    cout<<"Press 2 For Individual Details"<<endl;
    cout<<"Press 3 For All Details"<<endl;
    cout<<"Press 4 For Return"<<endl;
}
int main()
{
   cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    teacher t[10];
    officer o[10];
    casual c[10];
    regular r[10];
    int choice,i,i1=0,i2=0,i3=0,i4=0,scode,subchoice,check;
    char choice_t;
    cout<<"========================================================================================================================"<<endl;
    cout<<endl<<"WELCOME TO SVIT VASAD "<<endl;
    cout<<endl<<"PLEASE PRESS ENTER TO START "<<endl;
    getch();
    options();
    while(1)
    {
      cout<<endl<<"Please Enter Your Choice:";
      cin>>choice;
      if(choice==1)
      {
          suboptions();
          while(1)
          {
          cout<<endl<<"Please Enter Your Choice:";
          cin>>subchoice;
          if(subchoice==1)
          {
             scode=i1+1;
             t[i1].gett(scode);
             cout<<endl<<"Your ID NO. is "<<scode<<endl;
             i1++;
          }
          else if(subchoice==2)
          {
              cout<<endl<<"Enter ID NO.:";
              cin>>check;
              for(i=0;i<10;i++)
              {
                  if(t[i].getcode()==check)
                  {
                      cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Subject"<<setw(15)<<"Publication"<<endl;
                      t[i].dispt();
                      break;
                  }
              }
              if(i>=10)
               {
                 cout<<"NO Records Have Found"<<endl;
               }
          }
          else if(subchoice==3)
          {
              cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Subject"<<setw(15)<<"Publication"<<endl;
              for(i=0;i<i1;i++)
              {
                  t[i].dispt();
              }
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
          while(1)
          {
          cout<<endl<<"Please Enter Your Choice:";
          cin>>subchoice;
          if(subchoice==1)
          {
             scode=i2+11;
             o[i2].geto(scode);
             cout<<endl<<"Your ID NO. is "<<scode<<endl;
             i2++;
          }
          else if(subchoice==2)
          {
              cout<<endl<<"Enter ID NO.:";
              cin>>check;
              for(i=0;i<10;i++)
              {
                  if(o[i].getcode()==check)
                  {
                      cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Grade"<<endl;
                      o[i].dispo();
                      break;
                  }
              }
              if(i>=10)
                {
                    cout<<"NO Records Have Found"<<endl;
                }
          }
          else if(subchoice==3)
          {
              cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Grade"<<endl<<endl;
              for(i=0;i<i2;i++)
              {
                  o[i].dispo();
              }
          }
          else
          {
              options();
              break;
          }
      }
      }
      else if(choice==3)
      {
          cout<<"Which Type Of Typist Do You Want(R Regular/C casual)?";
          cin>>choice_t;
          if(choice_t=='R')
          {
          suboptions();
          while(1)
          {
          cout<<endl<<"Please Enter Your Choice:";
          cin>>subchoice;
          if(subchoice==1)
          {
             scode=i4+31;
             r[i4].getr(scode);
             cout<<endl<<"Your ID NO. is "<<scode<<endl;
             i4++;
          }
          else if(subchoice==2)
          {
              cout<<endl<<"Enter ID NO.:";
              cin>>check;
              for(i=0;i<10;i++)
              {
                  if(r[i].getcode()==check)
                  {
                      cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Speed"<<endl;
                      r[i].dispr();
                      break;
                  }
              }
              if(i>=10)
                  {
                      cout<<"NO Records Have Found"<<endl;
                  }
          }
          else if(subchoice==3)
          {
              cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Speed"<<endl<<endl;
              for(i=0;i<i4;i++)
              {
                  r[i].dispr();
              }
          }
          else
          {
              options();
              break;
          }
          }
          }
          else
          {
            suboptions();
            while(1)
          {
            cout<<endl<<"Please Enter Your Choice:";
            cin>>subchoice;
            if(subchoice==1)
            {
               scode=i3+21;
               c[i3].getca(scode);
               cout<<endl<<"Your ID NO. is "<<scode<<endl;
               i3++;
          }
          else if(subchoice==2)
          {
              cout<<endl<<"Enter ID NO.:";
              cin>>check;
              for(i=0;i<10;i++)
              {
                  if(c[i].getcode()==check)
                  {
                      cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Speed"<<setw(10)<<"Wages"<<endl;
                      c[i].dispca();
                      break;
                  }
              }
              if(i>=10)
              {
                cout<<"NO Records Have Found"<<endl;
              }
          }
          else if(subchoice==3)
          {
              cout<<setw(10)<<"code"<<setw(10)<<"Name"<<setw(10)<<"Speed"<<setw(10)<<"Wages"<<endl<<endl;
              for(i=0;i<i3;i++)
              {
                  c[i].dispca();
              }
          }
          else
          {
              options();
              break;
          }
      }
          }
      }
      else if(choice==4)
      {
          break;
      }
      else
      {
          cout<<"Enter Proper Number!"<<endl;
      }
    }
    return 0;
}
