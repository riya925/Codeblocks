#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
   cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    ifstream file("Data.txt");
    string name;
    int telephone;
    cout<<"Content of the File"<<endl<<endl;
    cout<<"Name"<<setw(15)<<"Telephone"<<endl<<endl;
    while(file >> name >> telephone)
    {
        cout.setf(ios::left,ios::adjustfield);
        cout<<name;
        cout.setf(ios::right,ios::adjustfield);
        cout<<setw(15)<<telephone<<endl;
    }
    return 0;
}
