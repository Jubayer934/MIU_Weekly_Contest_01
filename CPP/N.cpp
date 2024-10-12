#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    int e = 0, o = 0, p = 0, n = 0;
    vector<int> numbers(t);

    for (int i = 0; i < t; i++) {
        cin >> numbers[i];
    }

    for (int num : numbers) {
        if (num % 2 == 0) {
            e++;
        } else {
            o++;
        }
        if (num > 0) {
            p++;
        } else if (num < 0) {
            n++;
        }
    }

    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;

    return 0;
}
