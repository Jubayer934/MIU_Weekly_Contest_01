#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string x, y;
    
    cin >> x >> y;
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    if (x == y)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
