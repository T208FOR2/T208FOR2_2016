#include <iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

void openFile(ifstream& fin, string thefilename);
int sum(ifstream& fin);
void sum(ifstream& fin, int &summa);

int first(ifstream& fin);
void first(ifstream& fin, int &number);

int last(ifstream& fin);
void last(ifstream& fin, int& number);

int main()
{
    ifstream fin;
    string filename;
    cin >> filename;

    openFile(fin, filename);
    int firsta = first(fin);
    fin.close();

    openFile(fin, filename);
    int seinasta = last(fin);
    fin.close();

    openFile(fin, filename);
    int summa = sum(fin);
    fin.close();

    cout << "First: " << firsta << endl;
    cout << "Last: " << seinasta << endl;
    cout << "Sum: " << summa << endl;
    return 0;
}

void openFile(ifstream& fin, string thefilename)
{
    fin.open(thefilename.c_str());
    if(fin.fail())
    {
        cout << "Error" << endl;
        exit(1);
    }
}

int sum(ifstream& fin)
{
    int number = 0;
    int summa = 0;
    while(fin >> number)
    {
        summa = summa + number;
    }
    return summa;
}

void sum(ifstream& fin, int &summa)
{
    int number = 0;
    summa = 0;
    while(fin >> number)
    {
        summa = summa + number;
    }
}

int first(ifstream& fin)
{
    int number;
    fin >> number;
    return number;
}

void first(ifstream& fin, int &number)
{
    fin >> number;
}

int last(ifstream& fin)
{
    int number;
    while(fin >> number)
    {

    }
    return number;
}

void last(ifstream& fin, int& number)
{
    while(fin >> number)
    {

    }
}
