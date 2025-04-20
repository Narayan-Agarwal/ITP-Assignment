#include <iostream>
using namespace std;
void printArray(int arr[], int size, int index = 0) {
    if (index == size)
        return;
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    printArray(arr, n);
    return 0;
}
