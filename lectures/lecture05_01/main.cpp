#include <iostream>
using namespace std;

bool rectangle(double w, double h, double& area, double& circumference);

int main()
{
    double w,h;
    double a = 0,c = 0;
    cin >> w >> h;

    bool calculationssuccessful = rectangle(w,h,a,c);

    if (calculationssuccessful == true) {
        cout << "Area: " << a << endl;
        cout << "Circumference: " << c << endl;
    }
    else {
        cout << "Your rectangle is strange...?" << endl;
    }

    return 0;
}

bool rectangle(double w, double h, double& area, double& circumference) {
    if (w < 0 || h < 0) {
        area = 0;
        circumference = 0;
        return false;
    }
    else {
        area = w*h;
        circumference = w+w+h+h;
        return true;
    }

}
