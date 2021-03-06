#include "Numbers.h"

namespace {

    int max(int a, int b) {
        if (a > b) {
            return a;
        }
        else {
            return b;
        }
    }

}


Numbers::Numbers() {
    cout << "*** Constructor ***" << endl;
    separator = "\n";
    p = NULL;
    n = 0;
    max_elements = 0;
}

Numbers::Numbers( const Numbers& cloneme ) {
    // Clone simple variables
    cout << "*** Copy Constructor ***" << endl;
    n = cloneme.n;
    max_elements = cloneme.max_elements;
    separator = cloneme.separator;

    // Clone the dynamic variables
    if (max_elements == 0) {
        p = NULL;
    }
    else {
        // create new dynamic array
        p = new int[max_elements];
        for (int i = 0; i < n; i++) {  // copy elements
            p[i] = cloneme.p[i];
        }
    }
}

void Numbers::operator = (const Numbers &sameasme) {
    cout << "*** assignment operator ***" << endl;
    // Check if we need to change size of the dynamic array
    if (max_elements != sameasme.max_elements) {
        if (p != NULL) {
            delete [] p;
        }
        p = new int[sameasme.max_elements];
        max_elements = sameasme.max_elements;
    }
    // Now the array is of correct length, so we just copy everything
    separator = sameasme.separator;
    n = sameasme.n;
    for (int i = 0; i < n; i++) {
        p[i] = sameasme.p[i];
    }
}

Numbers::~Numbers() {
    cout << "*** Destructor ***" << endl;
    if (p != NULL) {
        delete [] p;
        p = NULL;
    }
}

void Numbers::append(int i) {
    if (n == max_elements) {
        double_size_of_array();
    }

    p[n] = i;
    n = n + 1;
}

void Numbers::insert(int i, int pos) {
    append(p[n-1]);
    for (int i = n-1; i > pos; i--) {
        p[i] = p[i-1];
    }
    p[pos] = i;
}

void Numbers::remove(int pos) {
    for (int i = pos; i < n-1; i++) {
        p[i] = p[i+1];
    }
    n = n - 1;
}

int Numbers::find(int key) {
    return find(key,0);
}

int Numbers::find(int key, int pos) {
    for (int i = pos; i < n; i++) {
        if (p[i] == key) {
            return i;
        }
    }
    return -1;
}

void Numbers::double_size_of_array() {
    cout << "*** double size ***" << endl;

    if (max_elements == 0) {
        max_elements = 2;
        p = new int[max_elements];
    }
    else {
        max_elements = max_elements * 2;
        int *new_p = new int[max_elements];
        for (int i = 0; i < n; i++) {
            new_p[i] = p[i];
        }
        delete [] p;
        p = new_p;
    }
}

ostream& operator << (ostream& outs, const Numbers &num) {
    outs << num.p[0];
    for (int i = 1; i < num.n; i++) {
        outs << num.separator << num.p[i];
    }
    return outs;
}

