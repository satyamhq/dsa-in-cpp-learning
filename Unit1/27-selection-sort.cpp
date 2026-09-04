// Selection sort algorithm in C++

#include <iostream>
using namespace std;

int main() {
    // Create the array
    int arr[] = {64, 24, 12, 22, 11};

    // Find length of array
    int len = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array
    for (int i = 0; i < len - 1; i++) {

        // Assume current element is minimum
        int minIndex = i;

        // Find the smallest element
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap minimum element with current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Print sorted array
    cout << "Sorted array: ";

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}