#include <iostream>
#include <string>

using namespace std;

const int MAXLENGD = 1000;

int main()
{
    string inntak = "", leitarord;
    string ord[MAXLENGD];
    int n = 0, index = -1;

    while (inntak != "exit") {
        cin >> inntak;
        ord[n] = inntak;
        n = n + 1;
    }

    cout << "what word are you searching for: ";
    cin >> leitarord;

    cout << "---------------";

    for (int i = 0; i < n; i++) {
        if (leitarord == ord[i]) {
            index = i;
            break;
        }
    }



    return 0;
}
