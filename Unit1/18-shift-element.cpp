#include <iostream>
using namespace std;

int main() {
    int n, m;
    char arr[16];
    char newChar;

    cin >> n;

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;
    cin >> newChar;

    // Shift elements to the right
    for (int i = n; i > m; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new character
    arr[m] = newChar;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        cout << arr[i];
        if (i < n) {
            cout << " ";
        }
    }

    return 0;
}