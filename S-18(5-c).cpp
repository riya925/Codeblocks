/*#include<iostream>
using namespace std;

template <class t1,class t2>
class large
{
    t1 a;
    t2 b;
public:
    large(t1 a,t2 b)
    {
        this->a=a;
        this->b=b;
    }
    void output()
    {
        if(a>b)
        {
            cout<<"\n largest number is = "<<a;
        }
        else
        {
            cout<<"\n largest number is = "<<b;
        }
    }
};
int main()
{
    large<int,float>l1(4,5.6);
    large<int,int>l2(4,6);

    l1.output();
    l2.output();
    return 0;
}*/

#include<iostream>
using namespace std;

template <class t>
class sort
{
    t s[5],temp;
    int i,j;
    public:
    void input()
    {
        for(i=0;i<=4;i++)
        {
            cout<<"\n Enter the elements : ";
            cin>>s[i];
        }
    }
    void output()
    {
        for(i=4;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(s[j]>s[j+1])
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
    }
    void show()
    {
        for(i=0;i<=4;i++)
        {
            cout<<"\n Sorted array is : "<<s[i];
        }
    }
};
int main()
{
    sort<int> s1;
    s1.input();
    s1.output();
    s1.show();
    return 0;
}
