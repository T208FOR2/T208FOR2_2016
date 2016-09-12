#include <iostream>
#include <fstream>  // Files!
#include <cstdlib>  // exit...
#include <string>
using namespace std;

int main()
{
    ifstream thefile;
    string thefilename;
    cout << "Write the filename: ";
    cin >> thefilename;

    thefile.open(thefilename.c_str());


    return 0;
}

