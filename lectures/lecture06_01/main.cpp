#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream theinputfile;
    ofstream theoutputfile;

//    theinputfile.open("C:\\Users\\notandi\\desktop\\skra.txt");
    theinputfile.open("/Users/Eyjo/Programming/T-208-FOR2/Haust2016/T208FOR2_2016/lectures/lecture06_01/bin/Debug/randomtolur.dat");
    if (theinputfile.fail()) {
        cout << "Can't find the file!" << endl;
        exit(1);
    }

    theoutputfile.open("theoutput.txt");
    if (theoutputfile.fail()) {
        cout << "Can't create the file!" << endl;
        exit(1);
    }

    // Do something clever with the file
    int tala, sum = 0;
    for (int i = 0; i < 10; i++) {
        theinputfile >> tala;
        sum = sum + tala;
    }
    theoutputfile << "Medaltal: " << sum / 10.0 << endl;

    theinputfile.close();
    theoutputfile.close();

    theinputfile.open("theoutput.txt");
    if (theinputfile.fail()) {
        cout << "Can't find the file!" << endl;
        exit(1);
    }

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
