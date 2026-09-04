#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[100];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }
    while (j < n) {
        nums[j] = 0;
        j++; 
    }
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}