#include <iostream>

using namespace std;

long long sumPath(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n;  // Soma o número atual no caminho
        n /= 2;    // Move para o nó pai
    }
    return sum;
}

int main() {
    int t;
    cin >> t;  // Número de casos de teste
    while (t--) {
        long long n;
        cin >> n;  // Nó de destino
        cout << sumPath(n) << endl;
    }
    return 0;
}
