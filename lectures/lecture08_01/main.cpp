#include <iostream>
#include <string>

using namespace std;

const int MAXLENGD = 1000;

int main()
{
    string inntak = "", leitarord;
    string ord[MAXLENGD];
    int n = 0;

    while (inntak != "exit") {
        cin >> inntak;
        ord[n] = inntak;
        n = n + 1;
    }

    cout << "what word are you searching for: ";
    cin >> leitarord;

    cout << "---------------";

    for (int i = n-1; i >= 0; i--) {
        cout << ord[i] << endl;
    }



    return 0;
}
