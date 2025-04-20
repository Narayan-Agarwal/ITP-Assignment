#include <iostream>
using namespace std;

void removeNonAlphabets(string& str) {
    string result = "";
    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }
    str = result;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    removeNonAlphabets(str);
    cout << "String after removing non-alphabets: " << str << endl;
    return 0;
}
