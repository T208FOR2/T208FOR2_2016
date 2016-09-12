#include <iostream>
#include <fstream>  // Files!
#include <cstdlib>  // exit...
#include <string>
using namespace std;

int main()
{
    ifstream thefile;
    string thefilename;
    int inputnumber, current;
    cout << "Write the filename: ";
    cin >> thefilename;

    thefile.open(thefilename.c_str());
    if (thefile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
    cout << "and a number: ";
    cin >> inputnumber;

    int minnsti_munur = 0, closest_tala = -1;
    while (thefile >> current) {


    }


    thefile.close();
    return 0;
}

