#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[5] = {2, 4, 5, 1, 8};

    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    reverseArray(arr, 5);

    cout << "\nReversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
