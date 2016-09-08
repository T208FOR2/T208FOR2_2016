#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream theinputfile;
//    theinputfile.open("C:\\Users\\notandi\\desktop\\skra.txt");
    theinputfile.open("/Users/Eyjo/Programming/T-208-FOR2/Haust2016/T208FOR2_2016/lectures/lecture06_01/bin/Debug/randomtolur.dat");

    if (theinputfile.fail()) {
        cout << "Can't find the file!" << endl;
        exit(1);
    }
    // Do something clever with the file
    int tala, sum;
    for (int i = 0; i < 10; i++) {
        theinputfile >> tala;
        sum = sum + tala;
    }
    cout << "Medaltal: " << sum / 10.0 << endl;

    theinputfile.close();
    return 0;
}
