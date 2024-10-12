#include <iostream>
using namespace std;

int main() {
    int n, temp = 0;
    cin >> n;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            temp++;
        }
    }

    cout << (temp == 0 ? "Yes" : "No") << endl;

    return 0;
}
