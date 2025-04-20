#include <iostream>
using namespace std;
void removeCharacter(string& str, char ch) {
    int n = str.length();
    int i = 0;
    while (i < n) {
        if (str[i] == ch) {
            for (int j = i; j < n - 1; j++) {
                str[j] = str[j + 1];
            }
            str[n - 1] = '\0';
            n--;
        } else {
            i++;
        }
    }
}
int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to remove: ";
    cin >> ch;
    removeCharacter(str, ch);
    cout << "String after removing the character: " << str << endl;
    return 0;
}
