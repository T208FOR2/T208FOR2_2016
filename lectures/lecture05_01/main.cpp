#include <iostream>
using namespace std;

void rectangle(int w, int h, int& area, int& circumference);

int main()
{

    return 0;
}

void rectangle(int w, int h, int& area, int& circumference) {
    area = w*h;
    circumference = w+w+h+h;
}
