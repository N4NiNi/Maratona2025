#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a >= b) {
            cout << a << '\n';
        } else {
            if (2 * a >= b) {
                cout << 2 * a - b << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}