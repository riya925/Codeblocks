// Write a program to implement class matrix and add,subtract and initilaize the matrix.
#include<iostream>
using namespace std;

class matrix
{
    int **xx,**yy,r,c,rr,cc,i,j;
    public:
    matrix()
    { }
    void input1()
    {
        cout<<"Enter the row and column size for first matrix :";
        cin>>rr>>cc;
        xx=new int*[rr];
        for(i=0;i<rr;i++)
        {
            xx[i]=new int[cc];
        }
        for(int r1=0;r1<rr;r1++)
        {
            for(int c1=0;c1<cc;c1++)
            {
                cout<<"Enter the elements:";
                cin>>xx[r1][c1];
            }
        }
        for(int r1=0;r1<rr;r1++)
        {
            for(int c1=0;c1<cc;c1++)
            {
                cout<<" "<<xx[r1][c1];
            }
            cout<<"\n";
        }
    }
    void input2()
    {
        cout<<"Enter the row and column size for second matrix :";
        cin>>r>>c;
        yy=new int*[r];
        for(j=0;j<r;j++)
        {
            yy[j]=new int[c];
        }
        for(int r2=0;r2<r;r2++)
        {
            for(int c2=0;c2<c;c2++)
            {
                cout<<"Enter the elements:";
                cin>>yy[r2][c2];
            }
        }
        for(int r2=0;r2<r;r2++)
        {
            for(int c2=0;c2<c;c2++)
            {
                cout<<" "<<yy[r2][c2];
            }
            cout<<"\n";
        }
    }
};
int main()
{
    matrix m1;
    m1.input1();
    m1.input2();
    return 0;
}
