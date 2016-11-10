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
    // adding 42
    tmp = head;
    while (tmp->data != 4) {
        tmp = tmp->next;
    }

    Node* node42 = new Node;
    node42->data = 42;

    node42->next = tmp->next;

    tmp->next = node42;

    // remove 7
    tmp = head;
    while (tmp->data != 6) {
        tmp = tmp->next;
    }

    Node* node7 = tmp->next;

    tmp->next = tmp->next->next;  // node7->next

    delete node7;
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
