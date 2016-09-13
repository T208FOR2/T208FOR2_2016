#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
//void initialize_random_generator(int seed);
//int random_int(int max_value);
void openFile(ofstream& fout, string filename);
void writeNumberToFile(ofstream& fout);
void openFile(ifstream& fin, string filename);
void printNumbersFromFile(ifstream& fin);
int sumOfNumbersInFile(ifstream& fin);
int minValue(ifstream& fin);
int maxValue(ifstream& fin);

int main()
{
    ofstream fout;
    string thefilename = "numbers.txt";

    openFile(fout, thefilename);

    for(int i = 0 ; i < 10; i++)
    {
        writeNumberToFile(fout);
    }
    fout.close();

    // Dæmi 2
    ifstream fin;

    openFile(fin, thefilename);
    printNumbersFromFile(fin);
    fin.close();

    openFile(fin, thefilename);
    int summa = sumOfNumbersInFile(fin);
    cout << "summa: " << summa << endl;
    fin.close();

    openFile(fin, thefilename);
    int minVal = minValue(fin);
    cout <<" minnsta gildi: " << minVal << endl;
    fin.close();

    openFile(fin, thefilename);
    int maxVal = maxValue(fin);
    cout <<" stæðsta gildi: " << maxVal << endl;
    fin.close();

    return 0;
}

void openFile(ofstream& fout, string filename)
{
    fout.open(filename.c_str());
    if (fout.fail())
    {
        cout << "Tókst ekki að opna skrá" << endl;
        exit(1);
    }
}

void openFile(ifstream& fin, string filename)
{
    fin.open(filename.c_str());
    if (fin.fail())
    {
        cout << "Tókst ekki að opna skrá" << endl;
        exit(1);
    }
}

void writeNumberToFile(ofstream& fout)
{
    if(fout.is_open())
    {
        int number;
        cin >> number;
        fout << number << endl;
    }
}

void printNumbersFromFile(ifstream& fin)
{
    if(fin.is_open())
    {
        int number;
        while(fin >> number)
        {
            cout << number << endl;
        }
    }
}

int sumOfNumbersInFile(ifstream& fin)
{
    int number;
    int sum = 0;
    while(fin >> number)
    {
        sum = sum + number;
    }
    return sum;
}

int minValue(ifstream& fin)
{
    int minVal;
    fin >> minVal;

    int number;
    while(fin >> number)
    {
        if(number < minVal)
        {
            minVal = number;
        }
    }
    return minVal;
}

int maxValue(ifstream& fin)
{
    int maxVal;
    fin >> maxVal;

    int number;
    while(fin >> number)
    {
        if(number > maxVal)
        {
            maxVal = number;
        }
    }
    return maxVal;
}
/*
void initialize_random_generator(int seed)
{
    if(seed < 0)
    {
        srand(static_cast<unsigned int>(time(NULL)) );
    }
    else
    {
        srand(seed);
    }
}


int random_int(int max_value)
{
    return rand() % max_value;
}*/



