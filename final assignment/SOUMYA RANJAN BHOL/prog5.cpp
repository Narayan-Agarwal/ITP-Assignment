#include <iostream>
using namespace std;
void removeDuplicates(int arr[], int size, int result[], int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[newSize++] = arr[i];
        }
    }
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size], result[size], newSize;
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    removeDuplicates(arr, size, result, newSize);
    cout << "Array with distinct elements:\n";
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
