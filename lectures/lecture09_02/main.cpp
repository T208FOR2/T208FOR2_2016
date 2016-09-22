#include <iostream>
#include <fstream>
using namespace std;

const int MAXFJOLDI = 100;

int main()
{
    ifstream infile;
    infile.open("test.txt");
    string strengur[MAXFJOLDI];
    int tala[MAXFJOLDI];
    int notud_stok = 0;

    while (infile >> strengur[notud_stok]) {
        notud_stok++;
    }

    for (int i = 0; i < notud_stok; i++) {
        cout << strengur[i] << " - " << tala[i] << endl;
    }
    infile.close();
    return 0;
}
