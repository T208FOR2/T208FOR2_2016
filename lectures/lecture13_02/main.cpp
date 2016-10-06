#include <iostream>

// Problem 2: Read positive integers, until user writes a negative number,
// then print the numbers out in reverse

using namespace std;

//typedef int* IntPtr;
//void double_size_of_array(IntPtr &fylki, int &length_of_array);

void double_size_of_array(int* &fylki, int &length_of_array);

int main()
{
    int tala, number_of_ints = 0, length_of_array = 2;
    int *fylki = new int[length_of_array];

    cin >> tala;
    while (tala >= 0) {
        // add to the array
        fylki[number_of_ints] = tala;
        number_of_ints = number_of_ints + 1;

        if (number_of_ints == length_of_array) {
            double_size_of_array(fylki, length_of_array);
        }

        cin >> tala;
    }

    // print in reverse
    for (int i = number_of_ints - 1; i >= 0; i--) {
        cout << fylki[i] << " ";
    }
    cout << endl;

    return 0;
}

void double_size_of_array(int* &fylki, int &length_of_array) {
    int *tmp = new int[length_of_array * 2];
    for (int i = 0; i < length_of_array; i++) {
        tmp[i] = fylki[i];
    }
    delete [] fylki;
    fylki = tmp;
    length_of_array = length_of_array * 2;
    cout << "The array has now space for " << length_of_array << " elements." << endl;
}




