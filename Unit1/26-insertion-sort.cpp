// Insertion sort algorithm in C++

#include <iostream>
using namespace std;

int main() {
    // Create the array
    int arr[] = {3, 1, 4, 5, 2};

    // Find length of array
    int len = sizeof(arr) / sizeof(arr[0]);

    // Start traversing from index 1
    for (int i = 1; i < len; i++) {

        // Define the key
        int key = arr[i];

        // Initialize j
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at its correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    cout << "Sorted array: ";

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}