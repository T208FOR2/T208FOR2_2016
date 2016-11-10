#include <iostream>
using namespace std;
const int N = 10;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL, *tmp;

    for (int i = 0; i < N; i++) {
        tmp = new Node;
        tmp->data = N - i;
        tmp->next = head;
        head = tmp;
    }

    // ADD CODE HERE...
    tmp = head;
    while (tmp->data != 4) {
        tmp = tmp->next;
    }
    Node* node42 = new Node;
    node42->data = 42;



    // END OF ADDED CODE

    tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;
}
