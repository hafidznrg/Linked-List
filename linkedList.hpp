#include <bits/stdc++.h>

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* node);

void konso(Node** head, int new_data);

void konsDot(Node** head, int new_data);

// void insertAt(Node** head, int new_data, int pos);