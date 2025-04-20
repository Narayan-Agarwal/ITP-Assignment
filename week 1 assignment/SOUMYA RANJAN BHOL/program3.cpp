#include <iostream>
using namespace std;

int main() {
    int num, largest = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    
    while (num > 0) 
    {
        digit = num % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        num /= 10;
    }
    
   cout << "The largest digit is: " << largest;
   cout  <<  endl;
    
    return 0;
}
