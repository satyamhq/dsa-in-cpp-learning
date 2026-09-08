#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ll;

    ll.push_back(10);
    ll.push_front(20);
    ll.push_back(30);
    ll.push_front(40);

    // Print the list
    for (int value : ll) {
        cout << value << " -> ";
    }

    cout << "nullptr" << endl;

    return 0;
}