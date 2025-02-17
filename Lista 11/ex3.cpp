#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> freq(n + 2, 0); // +2 para evitar problemas de índice
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    // Calcula a frequência de cada índice
    for (int i = 1; i <= n; ++i) {
        freq[i] += freq[i - 1];
    }

    // Ordena os elementos e as frequências
    sort(a.begin(), a.end(), greater<int>());
    sort(freq.begin() + 1, freq.begin() + n + 1, greater<int>());

    long long max_sum = 0;
    for (int i = 0; i < n; ++i) {
        max_sum += (long long)a[i] * freq[i + 1];
    }

    cout << max_sum << endl;
    return 0;
}