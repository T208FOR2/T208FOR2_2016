#include <iostream>

using namespace std;

namespace mainfile {

    int test() {
        cout << "Hello!" << endl;
        return 0;
    }

}

int main()
{
    int x = test();

    cout << x << endl;

    return 0;
}
