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
//
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

    int n;
    // While reading number from file works, continue
    while(fin >> n)
    {
        cout << n << endl;
    }

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
