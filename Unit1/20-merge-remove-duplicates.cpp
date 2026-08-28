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
    int size = 0;

    // Add elements from first array
    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < size; j++) {
            if (merged[j] == arr1[i]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            merged[size] = arr1[i];
            size++;
        }
    }

    // Add elements from second array
    for (int i = 0; i < m; i++) {
        bool duplicate = false;

        for (int j = 0; j < size; j++) {
            if (merged[j] == arr2[i]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            merged[size] = arr2[i];
            size++;
        }
    }

    cout << "\nMerged array without duplicates: ";

    for (int i = 0; i < size; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}