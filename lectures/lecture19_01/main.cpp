#include <iostream>
#include "Numbers.h"

using namespace std;

void printArray(Numbers num) {   // NOT part of the class
    num.separator = ", ";
    cout << "[" << num << "]" << endl;
}

int main()
{
    Numbers num;

    for (int i = 0; i < 15; i++) {
        num.append(i);
    }
    num.insert(42,3);
    num.remove(5);

    printArray(num);
    cout << "-------------" << endl;
    cout << num << endl;
    cout << "-------------" << endl;
    for (int i = num.length()-1; i >= 0; i--) {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "-------------" << endl;
    for (int i = 0; i < 5; i++) {
        Numbers tmp;
        tmp = num;
        printArray(tmp);
    }

    return 0;
}
