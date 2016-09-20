#include <iostream>

using namespace std;



int main()
{
    int n = 10;
    double number;
    double maxVal;
    double minVal;

    cin >> number;
    maxVal = number;
    minVal = number;

    for(int i = 0; i < n - 1; i++)
    {
        cin >> number;
        if(number > maxVal)
        {
            maxVal = number;
        }
        if( number < minVal)
        {
            minVal = number;
        }
    }
    cout << "min : " << minVal << ", " << "max : " << maxVal << endl;
    // Önnur aðferð

    bool first = true;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        if(first)
        {
            maxVal = number;
            munVal = number;
            first = false;
        }
        else
        {
            if(number > maxVal)
            {
                maxVal = number;
            }
            if( number < minVal)
            {
                minVal = number;
            }
        }
    }
    return 0;
}
