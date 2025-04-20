#include <iostream>
using namespace std;
void toLowercase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    toLowercase(str);
    cout << "String in lowercase: " << str << endl;
    return 0;
}
