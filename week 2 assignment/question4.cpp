#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary[32]; 
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2; 
        num /= 2; 
        i++;
    }
    
    cout << "Binary: ";
    if (i == 0) {
        cout << "0"; 
    } else {
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }
    cout << endl;
}

void decimalToOctal(int num) {
    int octal[32]; 
    int i = 0;
    
    while (num > 0) {
        octal[i] = num % 8; 
        num /= 8; 
        i++;
    }
    
    cout << "Octal: ";
    if (i == 0) {
        cout << "0"; 
    } else {
        for (int j = i - 1; j >= 0; j--) {
            cout << octal[j]; 
        }
    }
    cout << endl;
}

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal < 0) {
        cout << "Please enter a positive number!" << endl;
        return 0;
    }

    
    decimalToBinary(decimal);
    decimalToOctal(decimal);

    return 0;
}