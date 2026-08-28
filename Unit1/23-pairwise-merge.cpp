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
    int index = 0;

    // Merge pairwise
    int minSize = min(n, m);

    for (int i = 0; i < minSize; i++) {
        merged[index++] = arr1[i];
        merged[index++] = arr2[i];
    }

    // Add remaining elements
    for (int i = minSize; i < n; i++) {
        merged[index++] = arr1[i];
    }

    for (int i = minSize; i < m; i++) {
        merged[index++] = arr2[i];
    }

    cout << "\nPairwise merged array: ";

    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}