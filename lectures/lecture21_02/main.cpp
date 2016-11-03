#include <iostream>

using namespace std;

int factorial_iterative(int n) {
    int sum = 1;
    for (int k = n; k > 0; k--) {
        sum = k*sum;
    }
    return sum;
}

int main()
{

    return 0;
}
