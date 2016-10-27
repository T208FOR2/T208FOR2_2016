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

    void prentaeitthvad();
}

int main()
{
    using namespace mainfile;
    using namespace somethingelse;
    int x = mainfile::test();

    prentaeitthvad();

    cout << x << endl;

    return 0;
}


namespace somethingelse {
    void prentaeitthvad() {
        cout << "eitthvad" << endl;
    }
}
