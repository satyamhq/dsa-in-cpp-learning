#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int merged[n + m];

    // Copy first array
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }

    cout << "\nMerged array: ";

    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}