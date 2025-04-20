#include <iostream>
using namespace std;

void moveNegativeToOneSide(int arr[], int size) {
    int temp[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[j++] = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[j++] = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    moveNegativeToOneSide(arr, size);
    cout << "Array after moving negative elements to one side:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
