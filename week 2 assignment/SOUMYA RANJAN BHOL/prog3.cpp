#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int original[size], copy[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> original[i];
    }
    for (int i = 0; i < size; i++) {
        copy[i] = original[i];
    }
    cout << "Copied array: ";
    for (int i = 0; i < size; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}
