#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << "Sum of digits: " << result << endl;
    return 0;
}
