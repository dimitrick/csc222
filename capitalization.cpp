#include <iostream>
#include <string>
using namespace std;

string toUpper(string s) {
    string newString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97) {
            newString += s[i] - 32;
        } else {
            newString += s[i];
        }
    }
    return newString;
}

string toLower(string s) {
    string newString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] <= 97) {
            newString += s[i] + 32;
        } else {
            newString += s[i];
        }
    }
    return newString;
}

int main() {
    string input;
    cout << "Enter a lowercase string:" << endl;
    cin >> input;
    string temp = toUpper(input);
    cout << temp << endl;
    
    cout << "Enter an uppercase string:" << endl;
    cin >> input;
    temp = toLower(input);
    cout << temp << endl;

    return 0;
}
