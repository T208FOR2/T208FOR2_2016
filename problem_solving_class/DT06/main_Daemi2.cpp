#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
void openFile(ifstream& fin, string filename);
void openFile(ofstream& fout, string filename);
int readFile(ifstream& fin, string arr[]);
void printArray(ostream& out, string arr[], int length);
void removePrefix(string &line);
void spaceForBar(string &line);
void removeMP3(string &line);
void firstUpperLetter(string &line);


const int SIZE = 100;
int main()
{
    ifstream fin;
    string filename = "songlist.txt";
    openFile(fin, filename);

    string arr[SIZE];
    int n = readFile(fin, arr);
    printArray(cout, arr, n);

    for(int i = 0; i < n; i++)
    {
        removePrefix(arr[i]);
        spaceForBar(arr[i]);
        removeMP3(arr[i]);
        firstUpperLetter(arr[i]);
    }
    cout << endl;

    ofstream fout;
    fout.open("songlist2.txt");

    printArray(fout, arr, n);

    fin.close();
    fout.close();
    return 0;
}

void openFile(ifstream& fin, string filename)
{
    fin.open(filename.c_str());
    if( fin.fail())
    {
        cout << "Error" << endl;
        exit(1);
    }
}

void openFile(ofstream& fout, string filename)
{
    fout.open(filename.c_str());
    if( fout.fail())
    {
        cout << "Error" << endl;
        exit(1);
    }
}

int readFile(ifstream& fin, string arr[])
{
    int counter = 0;
    string line;
    while(getline(fin, line))
    {
        arr[counter] = line;
        counter++;
    }
    return counter;
}

void printArray(ostream& out, string arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        out << arr[i] << endl;
    }
}

void removePrefix(string &line)
{
    unsigned int pos = line.find_first_not_of("0123456789");
    if(pos == 0)
    {
        line.erase(0,2);
        return;
    }
    if(pos < line.length())
    {
        line.erase(0, pos + 1);
    }
}

void spaceForBar(string &line)
{
    unsigned int pos = line.find_first_of("_");
    while(pos < line.length())
    {
        line.erase(pos, 1);
        line.insert(pos, " ");
        pos = line.find_first_of("_");
    }
}

void removeMP3(string &line)
{
    unsigned int pos = line.find_last_of(".");
    if(pos < line.length())
    {
        line.erase(pos, 4); //.MP3
    }
}

void firstUpperLetter(string &line)
{
    line[0] = toupper(line[0]);
    unsigned int pos = line.find_first_of(" ");
    while(pos < line.length())
    {
        line[pos + 1] = toupper(line[pos + 1]);
        pos = line.find_first_of(" ", pos + 1);
    }
}
