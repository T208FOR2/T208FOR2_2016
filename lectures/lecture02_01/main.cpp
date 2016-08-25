#include <iostream>
#include <string>

using namespace std;

int main()
{
    double d = 0.2;
    double epsilon = 0.000000000000000001;
    cout.precision(20);
    cout << d << endl;
    cout << d + epsilon << endl;
/*
    int a,b;
    cout << "This is the start of the program" << endl;
    cout << "Please write the first number: ";
    cin >> a;
    cout << "and the second number: ";
    cin >> b;
    cout << "The numbers are " << a << " and " << b << endl;
*/
    return 0;
}
