#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void openFile(ofstream &out, string filename);
void openFileToRead(ifstream &in, string filename);


int main()
{
    // Write 10 numbers to file
//    ofstream fout;
//    openFile(fout, "numbers.txt");
//
//    for(int i = 0; i < 10; i++)
//    {
//        cout << "Type a number: ";
//        int n;
//        cin >> n;
//        fout << n << endl;
//    }

    // Read numbers from file
    ifstream fin;
    openFileToRead(fin, "numbers.txt");

    // While not at end of file, continue
//    while(fin.eof() != true)
//    {
//        int n;
        // if reading from file works, print number
//        if(fin >> n)
//        {
//            cout << n << endl;
//        }
//    }

    int n, sum = 0, min, max;
    // While reading number from file works, continue
    bool firstTime = true;

    fin >> n;
    min = n;
    max = n;
    sum += n;

    while(fin >> n)
    {
        sum += n;
    }
    cout << sum << endl;

    // Leysi í tveimur skrefum; þarf að loka og opna straum
    // til að færa mig í byrjun á skránni
    fin.close();
    openFileToRead(fin, "numbers.txt");

    while(fin >> n)
    {
        if(n < min)
        {
            min = n;
        }
        if(n > max)
        {
            max = n;
        }
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    fin.close();

    return 0;
}

// Open file to write, note: ofstream
void openFile(ofstream &out, string filename)
{
    out.open(filename.c_str());
    if(out.fail())
    {
        cout << "failed to open file" << endl;
        exit(1);
    }
}

// Open file to read, note: ifstream
void openFileToRead(ifstream &in, string filename)
{
    in.open(filename.c_str());
    if(in.fail())
    {
        cout << "failed to open file" << endl;
        exit(1);
    }
}
