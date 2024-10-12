#include <iostream>
#include <iomanip>  // For controlling output precision
using namespace std;

int main() {
    double R;
    const double pi = 3.141592653;

    cin >> R;

    cout << fixed << setprecision(9) << pi * (R * R) << endl;

    return 0;
}
