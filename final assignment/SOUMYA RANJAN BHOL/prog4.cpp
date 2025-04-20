#include <iostream>
using namespace std;
void rotateArray(int arr[], int size, int k) {
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + k) % size] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int size, k;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    rotateArray(arr, size, k);
    cout << "Array after rotation:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
