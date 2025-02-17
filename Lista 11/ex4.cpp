#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minOperations(string s) {
    int n = s.size();
    int count0 = 0, count1 = 0;  // Contagem de '0' e '1'

    // Contar total de '0' e '1' na string
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }

    int minOps = min(count0, count1); // Transformar tudo em '0' ou tudo em '1'

    int left0 = 0, left1 = 0;  // Contagem de '0' e '1' à esquerda conforme iteramos
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') left0++;
        else left1++;

        // Opção 1: Fazer a esquerda '0' e a direita '1'
        int ops1 = left1 + (count0 - left0);
        // Opção 2: Fazer a esquerda '1' e a direita '0'
        int ops2 = left0 + (count1 - left1);

        minOps = min({minOps, ops1, ops2});
    }

    return minOps;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minOperations(s) << endl;
    }
    return 0;
}
