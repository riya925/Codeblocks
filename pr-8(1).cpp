#include<iostream>
using namespace std;
class shape
{
    double x,y;
public:
    void get_data(double a,double b=0)
    {
        x=a;
        y=b;
    }
    double getx(){return x;}
    double gety(){return y;}
    virtual void display_area(){};
};
class circle:public shape
{
    double area;
public:
    void display_area()
    {
        area=3.14*getx()*getx();
        cout<<"Area of Circle:"<<area<<endl;
    }
};
class triangle:public shape
{
    double area;
public:
    void display_area()
    {
        area=(getx()*gety())/2;
        cout<<"Area of Triangle:"<<area<<endl;
    }
};
class rectangle:public shape
{
    double area;
public:
     void display_area()
    {
        area=(getx()*gety());
        cout<<"Area of Rectangle:"<<area<<endl;
    }
};
int main()
{
   cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    shape* s[3];
    double x,y;
    cout<<"Enter Details For Triangle:"<<endl;
    cout<<"Enter X:";
    cin>>x;
    cout<<"Enter Y:";
    cin>>y;
    triangle t;
    t.get_data(x,y);
    s[0]=&t;
    s[0]->display_area();
    cout<<"Enter Details For Rectangle:"<<endl;
    cout<<"Enter X:";
    cin>>x;
    cout<<"Enter Y:";
    cin>>y;
    rectangle r;
    r.get_data(x,y);
    s[1]=&r;
    s[1]->display_area();
    cout<<"Enter Details For Circle:"<<endl;
    cout<<"Enter X:";
    cin>>x;
    circle c;
    c.get_data(x);
    s[2]=&c;
    s[2]->display_area();
    return 0;
}
