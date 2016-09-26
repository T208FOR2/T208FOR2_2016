#include <iostream>
#include <string>

using namespace std;

void prenta(int i);
void prenta(string s);

int main()
{


    return 0;
}

void prenta(int i) {
    cout << "I'm an int function: " << i << endl;
}
void prenta(string s) {
    cout << "I'm a string function: " << s << endl;
}
