#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements in first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;

    cout << "Enter number of elements in second array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    // Merged array
    int merged[n + m];

    // Copy first array
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }

    cout << "Merged Array: ";

    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}