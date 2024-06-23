#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
    float sum = 0;
    int counter = 0;
    for ( int i = 1; i < argc; i++ )
    {
        sum = sum + atoi(argv[i]) ;
        counter++;
    }
    cout << "Average: " << sum/counter << "\n";
    return 0;
}
/*OUTPUT:

Values: 2 4 6 8 10
Average 6*/
