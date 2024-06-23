#include<iostream>
using namespace std;
class DB;
class DM
{
    float meter;
    float centimeter;
public:
    DM()
    {
        meter=0;
        centimeter=0;
    }
    DM(int m,int c)
    {
        meter=m;
        centimeter=c;
    }
    void disp()
    {
        cout<<"Meter:"<<meter<<" Centimeter:"<<centimeter<<endl;
    }
    DM friend add(DM,DB);
};
class DB
{
    float feet;
    float inch;
public:
    DB()
    {
        feet=0;
        inch=0;
    }
    DB(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void disp()
    {
        cout<<"Feet:"<<feet<<" Inch:"<<inch<<endl;
    }
    DM friend add(DM,DB);
};
DM add(DM d1,DB d2)
{
    DM temp;
    float ans1,ans2;
    ans1=d1.meter*100+d1.centimeter;
    ans2=d2.feet*39.37+d2.inch*2.54;
    ans1+=ans2;
    temp.meter=int(ans1/100);
    temp.centimeter=int(ans1)%100;
    return temp;
}
int main()
{
   cout<<"\n Enrollement no : "<< " 170410107108 \n";
    DM d1(10,20),d3;
    DB d2(5,10);
    d1.disp();
    d2.disp();
    d3=add(d1,d2);
    d3.disp();
return 0;
}
