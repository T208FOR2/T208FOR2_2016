#include <iostream>

using namespace std;

int factorial_iterative(int n) {
    int sum = 1;
    for (int k = n; k > 0; k--) {
        sum = k*sum;
    }
    return sum;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << factorial_iterative(n) << endl;
    cout << factorial(n) << endl;

    return 0;
}
