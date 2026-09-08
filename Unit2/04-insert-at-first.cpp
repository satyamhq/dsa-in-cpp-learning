#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Head of linked list
Node* head = nullptr;

// Insert a node at the beginning
void insertAtFirst(int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

// Print the linked list
void printLL() {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

int main() {
    insertAtFirst(40);
    insertAtFirst(30);
    insertAtFirst(20);
    insertAtFirst(10);

    printLL();

    return 0;
}