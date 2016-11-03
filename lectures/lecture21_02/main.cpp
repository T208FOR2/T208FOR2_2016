#include <iostream>

using namespace std;

// greatest common divisor
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

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

    cout << n << "! = " << factorial_iterative(n) << endl;
    cout << n << "! = " << factorial(n) << endl;

    int a,b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " = " << gcd(a,b) << endl;

    return 0;
}
