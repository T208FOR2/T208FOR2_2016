#include <iostream>
#include <fstream>  // Files!
#include <cstdlib>  // exit...
#include <string>
#include <cmath>
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
    bool fyrsta_itrun = true;
    while (thefile >> current) {

        if (( abs(inputnumber - current) < minnsti_munur ) || fyrsta_itrun) {
            minnsti_munur = abs(inputnumber - current);
            closest_tala = current;
            fyrsta_itrun = false;
        }
    }

    cout << closest_tala << endl;

    thefile.close();
    return 0;
}

