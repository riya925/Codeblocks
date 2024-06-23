#include<iostream>
using namespace std;
class Time
{
    int h;
    int m;
    int s;
public:
    Time():h(0),m(0),s(0){}
    Time(int a,int b,int c):h(a),m(b),s(c){}
    friend ostream& operator<<(ostream &,Time);
    friend istream& operator>>(istream &,Time&);
};
ostream & operator<<(ostream &d,Time t)
{
    d<<t.h<<":"<<t.m<<":"<<t.s;
    return d;
}
istream & operator>>(istream &d,Time &t)
{
    cout<<"Hours:";
    d>>t.h;
    cout<<"Minutes:";
    d>>t.m;
    cout<<"Seconds:";
    d>>t.s;
    return d;
}
int main()
{
   cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    Time t(1,2,3),t1;
    cin>>t1;
    cout<<t1;
    return 0;
}
