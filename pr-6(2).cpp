#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
class rectangular
{
    double x,y;
public:
    rectangular() { x=0; y=0; }
    rectangular(double xx,double yy) { x=xx; y=yy; }
    double getx() { return x; }
    double gety() { return y; }
    void input_rect()
    {
    cout<<" \nEnter rectangular coordinates x,y :"<<endl;
    cin>>x>>y;
    }
    void display_rect() { cout<<"("<<x<<","<<y<<")"; }
};
class polar
{
    double theta,r;
public:
    polar () { theta=0; r=0; }
    polar (double rr, double tt) {r=rr; theta=tt;}
    polar(rectangular R) //rectangular to polar, constr in dest class i.e. polar
        {
        r=sqrt((R.gety()*R.gety())+(R.getx()*R.getx()));
        theta=atan(R.gety()/R.getx());
        }

    operator rectangular() //polar to rectangular, func in source class i.e. polar
    {
    double x,y;
    x=r*cos(theta);
    y=r*sin(theta);
    return rectangular(x,y);
    }
    void input_polar() { cout<<"\nEnter polar coordinate r,theta: "; cin>>r>>theta; }
    void display_polar() { cout<<"\nr="<<r; cout<<"\ntheta="<<theta<<endl<<endl; }
};

int main()
{
   cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    rectangular r1(3,4);
    r1.display_rect();
    polar p1(r1);
    p1.display_polar();

    polar p2(5,0.927295);
    p2.display_polar();
    rectangular r2=p2;
    r2.display_rect();

    return 0;
}
