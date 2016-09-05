#include <iostream>
using namespace std;

bool rectangle(double w, double h, double& area, double& circumference);

int main()
{
    double w,h;
    double a = 0,c = 0;
    cin >> w >> h;

    rectangle(w,h,a,c);

    cout << "Area: " << a << endl;
    cout << "Circumference: " << c << endl;

    return 0;
}

void rectangle(double w, double h, double& area, double& circumference) {
    area = w*h;
    circumference = w+w+h+h;
}
