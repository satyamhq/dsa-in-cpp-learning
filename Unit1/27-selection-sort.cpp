// Selection sort algorithm in C++

#include <iostream>
using namespace std;

int main() {
    // Create the array
    int arr[] = {64, 24, 12, 22, 11};
    // find the lenght of array
    int len = sizeof(arr) / sizeof(arr[0]);
    // start traversing the array
    for (int i = 0; i < len - 1; i++) {
        // find the minimum element in unsorted array
        int min_index = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    // print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
