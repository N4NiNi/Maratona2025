#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// Função para calcular a soma dos dígitos de um número
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, K;
    cin >> N >> K; // Lê o número de flores e a posição de Gertrude

    vector<int> flowers(N);
    for (int i = 0; i < N; i++) {
        cin >> flowers[i]; // Lê a quantidade de pólen de cada flor
    }

    // Fila de prioridade (heap máximo) para manter as flores com mais pólen
    priority_queue<int> pq;
    for (int i = 0; i < N; i++) {
        pq.push(flowers[i]);
    }

    int pollen_collected = 0;

    // Simula as coletas das abelhas
    for (int i = 1; i <= K; i++) {
        if (pq.empty()) {
            pollen_collected = 0;
            break;
        }

        int current_flower = pq.top();
        pq.pop();

        int collected = sum_of_digits(current_flower);
        pollen_collected = collected;

        int remaining = current_flower - collected;
        if (remaining > 0) {
            pq.push(remaining);
        }
    }

    cout << pollen_collected << endl; // Imprime a quantidade de pólen coletada por Gertrude

    return 0;
}