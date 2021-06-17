#include <iostream>
#include "linkedList.hpp"
using namespace std;

int main(){
    Node* head = NULL;
    Node* dua = NULL;
    Node* tiga = NULL;

    head = new Node;
    dua = new Node;
    tiga = new Node;

    head->data = 1;
    head->next = dua;

    dua->data = 2;
    dua->next = tiga;

    tiga->data = 3;
    tiga->next = NULL;

    printList(head);

    konsDot(&head, 0);
    konso(&head, 4);

    printList(head);
}