#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int x;

    cin >> s;
    cin.ignore(1000, '\n');
    cin >> x;

    cout << s << " and " << x << endl;

    return 0;
}
