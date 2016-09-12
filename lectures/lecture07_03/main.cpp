#include <iostream>

using namespace std;

int main()
{
    int tolur[10];
    for (int i = 0; i < 10; i++) {
        tolur[i] = i*i;
    }

    for (int i = 0; i < 10; i++) {
        cout << tolur[i] << endl;
    }

    return 0;
}
