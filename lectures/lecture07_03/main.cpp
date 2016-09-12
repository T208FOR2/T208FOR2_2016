#include <iostream>

using namespace std;

const int FJOLDI = 100;
void initialize_array(int a[], int n);

int main()
{
    int tolur[FJOLDI];
    initialize_array(tolur, FJOLDI);


    for (int i = 0; i < FJOLDI; i++) {
        cout << tolur[i] << endl;
    }

    return 0;
}

void initialize_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = i*i;
    }
}


