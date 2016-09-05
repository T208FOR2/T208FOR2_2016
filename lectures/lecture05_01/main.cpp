#include <iostream>
using namespace std;

double mean_grade(int a, int b, int c, int d);
double weighted_mean_grade(int a, int b, int c, int d);
double min_max_average_grade(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << "Mean:            " << mean_grade(a,b,c,d) << endl;
    cout << "Weighted Mean:   " << weighted_mean_grade(a,b,c,d) << endl;
    cout << "Min Max Average: " << min_max_average_grade(a,b,c,d) << endl;

    return 0;
}

double mean_grade(int a, int b, int c, int d) {
    return 1.0;
}
double weighted_mean_grade(int a, int b, int c, int d) {
    return 2.0;
}
double min_max_average_grade(int a, int b, int c, int d) {
    return 3.0;
}
