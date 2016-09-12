#include <iostream>

using namespace std;

const int FJOLDI = 100;

int main()
{
    int tolur[FJOLDI];
    for (int i = 0; i < FJOLDI; i++) {
        tolur[i] = i*i;
    }

    for (int i = 0; i < FJOLDI; i++) {
        cout << tolur[i] << endl;
    }

    cout << tolur[1000] << endl;

    return 0;
}
