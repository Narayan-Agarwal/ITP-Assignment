#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
     {
        for (int j = 1; j <= i; ++j) 
        {
            cout << j;
        }

       
        int spaces = 2 * (n - i);
        for (int k = 0; k < spaces; ++k) 
        {
            cout << " ";
        }

        
        for (int j = i; j >= 1; --j) 
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}