#include <iostream>
using namespace std;

void rectangle(int w, int h, int& area, int& circumference);

int main()
{
    int w,h;
    int a,c;
    cin >> w >> h;

    rectangle(w,h,a,c);

    cout << "Area: " << a << endl;
    cout << "Circumference: " << c << endl;

    return 0;
}

void rectangle(int w, int h, int& area, int& circumference) {
    area = w*h;
    circumference = w+w+h+h;
}
