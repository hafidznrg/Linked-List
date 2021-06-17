#include <bits/stdc++.h>

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* node);

void konso(Node** head, int new_data);

void konsDot(Node** head, int new_data);

void insertPos(Node** head, int new_data, int pos);

void deletePos(Node** head, int pos);

void deleteData(Node** head, int dataDel);