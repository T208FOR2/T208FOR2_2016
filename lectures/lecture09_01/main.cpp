#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

//const int MAX_WORDS = ???;

void open_file(ifstream &infile, string thefilename);

int main()
{
    ifstream infile;
    string thefilename = "grimm.txt";
    //cin >> thefilename;
    open_file(infile, thefilename);

    string s;
    int teljari = 1;
    infile >> s;
    cout << s << endl;
    while (infile >> s) {
        teljari++;
    }
    cout << teljari << endl;
    cout << s << endl;

    //string uniquewords[MAX_WORDS];

    infile.close();
    return 0;
}

void open_file(ifstream &infile, string thefilename) {
    infile.open(thefilename.c_str());
    if (infile.fail()) {
        cout << "Can't open the file: " << thefilename << endl;
        exit(1);
    }
}

