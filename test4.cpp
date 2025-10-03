#include <iostream>
#include <string>
using namespace std;

string toUpper(string s) {
    string newString = "";
    for (int i = 0; i < s.length(); i++) {
        newString += s[i] - 32;
    }
    return newString;
}

string toLower(string s) {
    string newString = "";
    for (int i = 0; i < s.length(); i++) {
        newString += s[i] + 32;
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
