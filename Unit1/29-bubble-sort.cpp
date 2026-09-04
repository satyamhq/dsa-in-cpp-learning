#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 4, 2, 1, 3, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n = len;

    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        n--;
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}