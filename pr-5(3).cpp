#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char *s1;
public:
    String()
    {
        s1=new char(0);
    }
    String(char *temp)
    {
        int l=strlen(temp);
        s1=new char[l];
        strcpy(s1,temp);
    }
    void disp()
    {
        cout<<s1<<endl;
    }
    void operator+(String a)
    {
        strcat(s1,a.s1);
    }
};
int main()
{
      cout<<"\n Enrollement no : "<< " 170410107108 \n";
    String s1("Great"),s3;
    String s2("well done");
    s1.disp();
    s2.disp();
    s1+s2;  // Or s3=s1.operator+(s2) we can also call in this way.
    s1.disp();
    return 0;
}
