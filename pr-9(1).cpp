#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class items
{
    string name;
    int code;
    float cost;
public:
    void readdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Code:";
        cin>>code;
        cout<<"Enter Cost:";
        cin>>cost;
    }
    void writedata()
    {
        cout<<setw(10)<<name<<setw(10)<<code<<setw(10)<<cost<<endl;
    }
};
int main()
{
    cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    items i[2];
    fstream file;
    file.open("FILE.txt",ios::in | ios::out |ios::binary);
    cout<<"Enter Details For Two Items:"<<endl<<endl;
    for(int k=0;k<2;k++)
    {
        cout<<"Enter Details For Item "<<k+1<<endl;
        i[k].readdata();
        file.write((char *) &i[k],sizeof(i[k]));
    }
    file.seekg(0);
    cout<<endl<<setw(10)<<"Name"<<setw(10)<<"Code"<<setw(10)<<"Cost"<<endl;
    cout<<endl<<"------------------------------------"<<endl<<endl;
    for(int k=0;k<2;k++)
    {
        file.read((char *)&i[k],sizeof(i[k]));
        i[k].writedata();
    }
    file.close();
    return 0;
}
