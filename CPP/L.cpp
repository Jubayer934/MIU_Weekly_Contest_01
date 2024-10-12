#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (size_t i = 0; i < s.length(); i++) {
        if (i == 0) {
            cout << (char)toupper(s[i]);
            continue;
        }
        if (s[i] == 's') {
            cout << '$';
        } else if (s[i] == 'i') {
            cout << '!';
        } else if (s[i] == 'o') {
            cout << "()";
        } else {
            cout << s[i];
        }
    }
    cout << '.' << endl;

    return 0;
}
