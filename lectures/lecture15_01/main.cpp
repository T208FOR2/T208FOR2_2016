#include <iostream>

using namespace std;

struct Statistics {
    double average;
    double stddev;
    double min_value;
    double max_value;
};

Statistics analyze_array(double *d, int n);

int main()
{
    Statistics s;
    int n;
    cin >> n;
    double *p = new double[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    s = analyze_array(p, n);

    cout << "Min: " << s.min_value << endl;
    cout << "Max: " << s.max_value << endl;
    cout << "Average: " << s.average << endl;
    cout << "StdDev: " << s.stddev << endl;

    delete [] p;
    return 0;
}

Statistics analyze_array(double *d, int n) {

}






