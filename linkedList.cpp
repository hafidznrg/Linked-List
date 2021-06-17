#include <iostream>
#include "linkedList.hpp"
using namespace std;

void printList(Node* node){
    while (node != NULL){
        cout << "(" << node->data << ")" << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

void konsDot(Node** head, int new_data){
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

void konso(Node** head, int new_data){
    Node* new_node = new Node;
    Node* last = *head;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL){
        *head = new_node;
    } else {
        while (last->next != NULL){
            last = last->next;
        }
        last->next = new_node;
    }
}

// void insertAt(Node** head, int new_data, int pos){
//     Node* new_node = new Node;
//     Node* node = *head;
//     new_node->data = new_data;

//     if (head == NULL){
//         cout << "List Kosong, tidak bisa menyisipkan" << endl;
//         return;
//     }
// }