#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_coins(int n, string path) {
    vector<int> dp(n, -1); // Inicializa com -1 para indicar células inacessíveis
    dp[0] = 0; // A primeira célula é sempre vazia e acessível

    for (int i = 0; i < n; i++) {
        if (dp[i] == -1) continue; // Se a célula atual é inacessível, pule

        // Movimento de 1 célula
        if (i + 1 < n && path[i + 1] != '*') {
            dp[i + 1] = max(dp[i + 1], dp[i] + (path[i + 1] == '@' ? 1 : 0));
        }

        // Movimento de 2 células
        if (i + 2 < n && path[i + 2] != '*') {
            dp[i + 2] = max(dp[i + 2], dp[i] + (path[i + 2] == '@' ? 1 : 0));
        }
    }

    int max_coins = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] != -1) {
            max_coins = max(max_coins, dp[i]);
        }
    }

    return max_coins;
}

int main() {
    int t;
    cin >> t; // Lê o número de casos de teste

    while (t--) {
        int n;
        cin >> n; // Lê o comprimento do caminho

        string path;
        cin >> path; // Lê a descrição do caminho

        int result = max_coins(n, path);
        cout << result << endl; // Imprime o resultado
    }

    return 0;
}