#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    bool isPerfectSquare = false;
    for (int i = 1; i * i <= num; i++) 
    {
        if (i * i == num) 
        {
            isPerfectSquare = true;
            break;
        }
    }
    
    if (isPerfectSquare) 
    {
        cout << num << " is a perfect square.";
        cout  << endl;
    } 
    else 
    {
        cout << num << " is not a perfect square.";
        cout  << endl;
    }
    
    return 0;
}
