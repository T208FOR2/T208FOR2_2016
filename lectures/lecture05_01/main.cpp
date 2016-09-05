#include <iostream>
using namespace std;

int somefunction(int &tala1, int tala2, int &tala3);

int main()
{

    return 0;
}

int somefunction(int &tala1, int tala2, int &tala3) {
    tala1 = 42;
    tala2 = 23;
    tala3 = 17;
    return tala1+tala2+tala3;
}


