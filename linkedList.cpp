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

void insertPos(Node** head, int new_data, int pos){
    Node* new_node = new Node;
    Node* curr = *head;
    Node* prev = *head;

    new_node->data = new_data;

    while (pos > 1 && curr != NULL){
        prev = curr;
        curr = curr->next;
        pos--;
    }

    if (pos == 1){
        if (curr == prev){
            new_node->next = (*head);
            (*head) = new_node;
        } else {
            prev->next = new_node;
            new_node->next = curr;
        }
        cout << "Node baru berhasil disisipkan" << endl;
        return;
    } else {
        cout << "Invalid position." << endl;
        return;
    }
}

void deletePos(Node** head, int pos){
    Node* curr = *head;
    Node* prev = *head;

    while (pos > 1 && curr != NULL){
        prev = curr;
        curr = curr->next;
        pos--;
    }

    if (pos == 1){
        prev->next = curr->next;
        delete curr;
        cout << "Node baru berhasil dihapus" << endl;
        return;
    } else {
        cout << "Invalid position." << endl;
        return;
    }
}

void deleteData(Node** head, int dataDel){
    Node* curr = *head;
    Node* prev = *head;

    while (curr != NULL && curr->data != dataDel){
        prev = curr;
        curr = curr->next;
    }

    if (curr->data == dataDel){
        if (curr == prev){
            *head = curr->next;
        } else {
            prev->next = curr->next;
            delete curr;
        }
        cout << "Data berhasil dihapus" << endl;
    } else {
        cout << "Data tidak ada di dalam list" << endl;
    }
}