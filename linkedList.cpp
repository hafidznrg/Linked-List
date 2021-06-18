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

int length(Node* node){
    int len = 0;
    while (node != NULL) {
        len++;
        node = node->next;
    }
    return len;
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

bool searchData(Node** head, int data){
    Node* node = *head;
    int index = 0;

    while (node != NULL){
        index++;
        if (node->data == data){
            cout << data << " ditemukan di dalam list pada indeks ke-" << index << endl;
            return true;
        }
        node = node->next;
    }
    cout << data << " tidak ada di dalam list" << endl;
    return false;
}

void swapPos(Node** head, int pos1, int pos2){
    int len = length(*head);
    int count = 1;

    if (len < 2){
        cout << "Tidak bisa menukar posisi data di dalam list" << endl;
        return;
    } else if (pos1 > len || pos2 > len) {
        cout << "Posisi tidak ada di dalam list" << endl;
        return;
    } else if (pos1 == pos2) {
        cout << "Posisi keduanya sama" << endl;
        return;
    } else if (pos1 > pos2) {
        int temp = pos1;
        pos1 = pos2;
        pos2 = temp;
    }

    Node* prev1 = NULL;
    Node* front = *head;
    while (count != pos1) {
        prev1 = front;
        front = front->next;
        count++;
    }
    
    Node* prev2 = NULL;
    Node* back = front;
    while (count != pos2 && back != NULL){
        prev2 = back;
        back = back->next;
        count++;
    }

    // Case posisi 1 merupakan head
    if (prev1 == NULL)
        (*head) = back;
    else
        prev1->next = back;
    
    prev2->next = front;

    Node* temp;
    // swap front.next and back.next
    temp = front->next;
    front->next = back->next;
    back->next = temp;
}

void reverse(Node** head){
    Node *prev = NULL, *next = NULL;;
    Node *curr = *head;

    while (curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    (*head) = prev;
}