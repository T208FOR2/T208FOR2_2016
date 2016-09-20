#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void openFile(ofstream &out, string filename);
void openFileToRead(ifstream &in, string filename);

int min(ifstream &in);
int max(ifstream &in);
int sum(ifstream &in);

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

    // Get sum
    openFileToRead(fin, "numbers.txt");
    cout << "sum: " << sum(fin) << endl;
    fin.close();

    // Get min
    openFileToRead(fin, "numbers.txt");
    cout << "min: " << min(fin) << endl;
    fin.close();

    // Get max
    openFileToRead(fin, "numbers.txt");
    cout << "max: " << max(fin) << endl;
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

int sum(ifstream &in)
{
    // Note: upphafsstilla sum sem 0
    int sum = 0, n;
    while(in >> n)
    {
        sum += n;
    }
    return sum;
}

int min(ifstream &in)
{
    int min, n;
    // Lesa fyrstu t�lu �r skr� og geyma � min
    in >> n;
    min = n;
    // Nota a�ra a�fer� en � sum, til a� s�na b��ar a�fer�ir
    // sum og min while-lykkjur eru jafngildar
    while(in.eof() != true)
    {
        if(in >> n)
        {
            // ef n minna en min, skipta um gildi � min
            if(n < min)
            {
                min = n;
            }
        }
    }
    return min;
}

int max(ifstream &in)
{
    int max, n;
    // Lesa fyrstu t�lu �r skr� og geyma � max
    in >> n;
    max = n;
    // Lesa restina af t�lum �r skr�
    while(in >> n)
    {
        // ef n st�rra en max, skipta um gildi � max
        if(n > max)
        {
            max = n;
        }
    }
    return max;
}
