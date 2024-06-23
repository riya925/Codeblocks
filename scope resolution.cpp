#include<iostream>
using namespace std;
int a=10;

class scope
{
    int a;
public:
    void show();
    void hello();
    void bye();
};

void scope :: show()
{
    a=100;
    int a=1000;
    cout<<"\n\n Local = "<<a;
    cout<<"\n class = "<<this->a;
    cout<<"\n global = "<< ::a;
    //cout<<"\n address = "<<this;
}
void scope :: hello()
{
    cout<<"\n\n HELLO";
}
void scope :: bye()
{
    cout<<"\n\n BYE";
}
int main()
{
    scope s1,s2,s3;
    s1.show();
    s2.show();
    s3.show();
    //s1.hello();
    //s1.bye();

    scope *p;
    p->show();
    return 0;
}
