#include <iostream>
using namespace std;

void covtToBin(int num) {
    int binary[32];
    int index = 0;
    if (num == 0) {
        cout << "0";
        return;
    }
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}
void covtToOct(int num) {
    int octal[32];
    int index = 0;
    if (num == 0)
    {
        cout << "0";
        return;
    }
    while (num > 0) {
        octal[index] = num % 8;
        num = num / 8;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
}
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary equivalent: ";
    covtToBin(decimal);
    cout << endl;
    cout << "Octal equivalent: ";
    covtToOct(decimal);
    cout << endl;
    return 0;
}
