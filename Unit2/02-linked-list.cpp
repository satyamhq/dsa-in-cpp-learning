#include <iostream>
using namespace std;

struct Node {
    // Store the data
    int data;

    // Store the address of the next node
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    // Create nodes
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);
    Node* fourthNode = new Node(40);

    // Connect the nodes
    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;

    // Print the linked list
    Node* temp = firstNode;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;

    return 0;
}