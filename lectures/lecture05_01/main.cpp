#include <iostream>
using namespace std;

rectangle(int w, int h, int& area, int& circumference);

int main()
{

    return 0;
}

rectangle(int w, int h, int& area, int& circumference) {
    area = w*h;
    circumference = w+w+h+h;
}
