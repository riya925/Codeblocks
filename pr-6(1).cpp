#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    float radius;
    float angle;
public:
    polar()
    {
        radius=angle=0;
    }
    polar(float r,float a)
    {
        radius=r;
        angle=a;
    }
    void disp()
    {
        cout<<"Point("<<radius<<","<<angle<<")"<<endl;
    }
    polar operator+(polar p)
    {
        float x,y;
        polar temp;
        x=radius*cos(angle)+p.radius*cos(p.angle);
        y=radius*sin(angle)+p.radius*sin(p.angle);
        temp.radius=sqrt(x*x+y*y);
        temp.angle=atan(x/y);
        return temp;
    }
};
int main()
{
 cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    polar p1(5,30),p2(10,60),p3;
    p1.disp();
    p2.disp();
    p3=p1+p2;
    p3.disp();
    return 0;
}
