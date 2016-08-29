#include <iostream>

using namespace std;

// BARA FASTAR HƒRNA!
const int CURRENTYEAR = 2016;

int main()
{
    int startyear;
    cin >> startyear;
    while (startyear < CURRENTYEAR) {
        cout << startyear << endl;
        startyear++;
    }

    return 0;
}
