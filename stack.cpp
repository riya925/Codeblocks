#include<iostream>
using namespace std;

template <class t>
class stack
{
    t st[3],x;
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push()
    {
        if(top==2)
        {
            cout<<"\n\n Stack overflow.... ";
        }
        else
        {
            cout<<"\n Enter no you want to push : ";
            cin>>x;
            st[++top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"\n\n Stack underflow.... ";
        }
        else
        {
            x=st[top--];
            cout<<"\n popped value is : "<<x;
        }
    }
};
int main()
{
    stack<int> s1;
    int ch=0;
    while(ch!=3)
    {
        cout<<"\n\n MENU !!!! ";
        cout<<"\n 1.PUSH ";
        cout<<"\n 2.POP ";
        cout<<"\n 3.EXIT ";
        cout<<"\n SELECT YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
            case 1:s1.push();
                    break;
            case 2:s1.pop();
                    break;
        }
    }
    return 0;
}
