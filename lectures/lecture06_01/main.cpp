#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream theinputfile;
    theinputfile.open("randomtolur.dat");

    if (theinputfile.fail()) {
        cout << "Can't find the file!" << endl;
        exit(1);
    }
    // Do something clever with the file
    theinputfile.close();
    return 0;
}
