#include <iostream>

using namespace std;

namespace mainfile {

    int test() {
        cout << "Hello!" << endl;
        return 0;
    }

}

namespace somethingelse {

    int test() {
        cout << "Hi again!" << endl;
        return 0;
    }

}

int main()
{
    using namespace mainfile;
    int x = somethingelse::test();

    cout << x << endl;

    return 0;
}
