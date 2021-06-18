#include <bits/stdc++.h>

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* node);

int length(Node* node);

void konso(Node** head, int new_data);

void konsDot(Node** head, int new_data);

void insertPos(Node** head, int new_data, int pos);

void deletePos(Node** head, int pos);

void deleteData(Node** head, int dataDel);

bool searchData(Node** head, int data);

void swapPos(Node** head, int pos1, int pos2);

void reverse(Node** head);