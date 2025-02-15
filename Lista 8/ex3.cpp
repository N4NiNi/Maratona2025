#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;

    long long a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    cin >> N; // Lê o valor de N

    long long numerator = fibonacci(N);
    cout << numerator << endl; // Imprime o numerador

    return 0;
}