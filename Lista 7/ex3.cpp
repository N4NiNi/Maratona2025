#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  // Número de casos de teste
    cin >> t;

    while (t--) {
        int n;  // Comprimento da array
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Ordenar para facilitar combinações eficientes
        sort(arr.begin(), arr.end());

        while (arr.size() > 1) {
            // Combinar os dois menores elementos (sempre os primeiros)
            int a = arr[0];
            int b = arr[1];

            // Calcular novo elemento com a média inteira (floor)
            int new_element = (a + b) / 2;

            // Remover os dois elementos usados
            arr.erase(arr.begin());
            arr.erase(arr.begin());

            // Inserir o novo elemento mantendo a lista ordenada
            auto pos = lower_bound(arr.begin(), arr.end(), new_element);
            arr.insert(pos, new_element);
        }

        // O elemento restante é a resposta
        cout << arr[0] << '\n';
    }

    return 0;
}
