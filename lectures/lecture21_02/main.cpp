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
    int n;
    cin >> n;

    cout << factorial_iterative(n) << endl;

    return 0;
}
