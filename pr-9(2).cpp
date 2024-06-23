#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <process.h>
using namespace std;
int main()
{
    cout<<"\n Enrollment  no. "<<" 170410107108 \n";
    ifstream file1;
    ofstream file2;
    char sfile[13],tfile[13];
    cout << "Enter Source file name: ";
    cin >> sfile;
    cout << "Enter Target file name: ";
    cin >> tfile;
    file2.open(sfile);
    file2 << "Hello user    How are   you"<<endl;
    file2.close();
    file1.open(sfile);
    file2.open(tfile);
    if(!file1)
    {
        cerr << " Some Error..";
        exit(1);
    }
    char varch,p=file1.get();
    while(!file1.eof())
    {
        file2.put(p);
        varch = file1.get();
        if( p == ' ' && varch == ' ')
        {
        p = varch;
        varch = file1.get();
        }
        p = varch;
    }
    cout << "\nCopied..";
    file1.close();
    file2.close();
    cout << "\nContent of Source File..\n";
    file1.open(sfile);
    while(!file1.eof())
    {
        file1.get(varch);
        cout << varch;
    }
    file1.close();
    cout << "\nContent of Target File..\n";
    file1.open(tfile);
    while(!file1.eof())
    {
        file1.get(varch);
        cout << varch;
    }
    file1.close();
    return 0;
}
