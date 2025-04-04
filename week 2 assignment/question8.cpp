#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print spaces
        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
            cout << " ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
