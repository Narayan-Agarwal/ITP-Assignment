#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if (n < 2) {
        cout << "Array should contain at least two elements." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter " << n << " distinct elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    cout << "The second smallest element is: " << secondSmallest << endl;
    return 0;
}
