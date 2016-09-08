#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void openfile(ifstream &thefile, string thefilename);

int main()
{
    ifstream theinputfile;
    ofstream theoutputfile;

//    theinputfile.open("C:\\Users\\notandi\\desktop\\skra.txt");
    string thefilename = "/Users/Eyjo/Programming/T-208-FOR2/Haust2016/T208FOR2_2016/lectures/lecture06_01/bin/Debug/randomtolur.dat";
    openfile(theinputfile, thefilename);

    theoutputfile.open("theoutput.txt");
    if (theoutputfile.fail()) {
        cout << "Can't create the file!" << endl;
        exit(1);
    }

    // Calculate the average of all the numbers
    int tala, sum = 0;
    while(theinputfile >> tala) {
        sum = sum + tala;
    }
    theoutputfile << "Medaltal: " << sum / 10.0 << endl;

    theinputfile.close();
    theoutputfile.close();

    openfile(theinputfile,"theoutput.txt");

    // Let's read the file we created earlier
    string s;
    double d;
    theinputfile >> s;
    theinputfile >> d;
    cout << "The string is: " << s << endl;
    cout << "and the average is " << d << endl;

    theinputfile.close();
    return 0;
}


void openfile(ifstream &thefile, string thefilename) {
    thefile.open( thefilename.c_str() );
    if (thefile.fail()) {
        cout << "Can't find the file!" << endl;
        exit(1);
    }
}
