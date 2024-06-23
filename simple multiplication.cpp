#include<iostream>
using namespace std;

class mul
{
    int n,i;
    public:
    void input()
    {
        cout<<"\n Enter the value: ";
        cin>>n;
    }
    void output()
    {
        cout<<"\n Mulltiplication table is: ";
        for(i=1;i<=10;i++)
        {
            cout<<"\n\n"<<n<<" * "<<i<<" = "<<(n*i);
        }
    }
};
int main()
{
    mul m1;
    m1.input();
    m1.output();
    return 0;
}
