#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    
    int a = 1, b = 1;
    
    for (int i = 2; i < n; i++) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    
    return b;
}

int main() {
    int n;
    cin >> n;
    
    cout << fibonacci(n) << endl;
    
    return 0;
}
