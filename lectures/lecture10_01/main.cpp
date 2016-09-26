#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texti = "01234567890123456789";

    cout << texti.substr( texti.length() - 6 ,5) << endl;

    return 0;
}

