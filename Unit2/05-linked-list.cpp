#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert node at the end
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display linked list
    void display() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // Delete first node
    void deleteAtFirst() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* del = head;
        head = head->next;

        delete del;
        del = nullptr;
    }

    // Delete node at specific position
    void deleteAtSpecific(int pos) {

        if (pos < 1) {
            cout << "Invalid position..." << endl;
            return;
        }

        if (pos == 1) {
            deleteAtFirst();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Invalid position..." << endl;
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;

        delete del;
        del = nullptr;
    }
};

int main() {

    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    cout << "Original Linked List:" << endl;
    list.display();

    int pos;

    cout << "Enter position to delete: ";
    cin >> pos;

    list.deleteAtSpecific(pos);

    cout << "Linked List after deletion:" << endl;
    list.display();

    return 0;
}