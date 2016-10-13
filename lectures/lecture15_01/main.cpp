#include <iostream>
#include <cmath>
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
    Statistics s;

    if (n <= 0) {
        s.average = -1.0;
        s.stddev = -1.0;
        s.max_value = -1.0;
        s.min_value = -1.0;
        return s;
    }

    s.average = 0.0;
    s.stddev = 0.0;
    s.min_value = d[0];
    s.max_value = d[0];

    for (int i = 0; i < n; i++) {
        s.average += d[i];
        if (d[i] > s.max_value) {
            s.max_value = d[i];
        }
        if (d[i] < s.min_value) {
            s.min_value = d[i];
        }
    }
    s.average = s.average / n;

    for (int i = 0; i < n; i++) {
        s.stddev += (d[i]-s.average)*(d[i]-s.average);
    }
    s.stddev =  sqrt(s.stddev / (n-1));

    return s;
}








