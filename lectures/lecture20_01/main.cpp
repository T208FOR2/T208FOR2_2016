#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

int main()
{
    Node *head = NULL;
    Node *tmp;

    for (int i = 0; i < 10; i++) {
        tmp = new Node;

        tmp->next = head;



    }


    return 0;
}
