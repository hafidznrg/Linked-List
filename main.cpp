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

    // printList(head);

    konsDot(&head, 0);
    konso(&head, 4);

    // printList(head);

    // cout << "Insert a new node" << endl;
    // cout << "Insert data: 5" << endl;
    // insertPos(&head, 5, 1); //posisi 1
    // cout << searchData(&head, 10) << endl;
    // printList(head);
    // cout << length(head) << endl;
    // insertPos(&head, 5, 3); //posisi 3
    // printList(head);
    // insertPos(&head, 5, 12);
    // deletePos(&head, 2);
    // printList(head);
    // deleteData(&head, 2);
    // printList(head);
    // deleteData(&head, 5);
    // printList(head);
    // cout << "Swap" << endl;
    // swapPos(&head, 1, 4);
    // printList(head);
    // reverse(&head);
    // printList(head);
    // getNth(&head, 2);
    // getNth(&head, 10);
    printList(head);
    sort(&head);
    printList(head);
    getMiddle(&head);
    getFirst(&head);
    getLast(&head);
}