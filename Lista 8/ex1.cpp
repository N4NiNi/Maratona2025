#include <iostream>
#include <vector>
using namespace std;

// Função para rotacionar a matriz 90 graus no sentido anti-horário
vector<vector<int>> rotateCounterClockwise(const vector<vector<int>>& matrix, int n) {
    vector<vector<int>> rotated(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rotated[n - j - 1][i] = matrix[i][j];
        }
    }
    return rotated;
}

// Função para verificar se a matriz está ordenada corretamente
bool isSorted(const vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] < matrix[i][j - 1]) return false; // Verifica se a linha não está ordenada
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int rotations = 0;
    while (rotations < 4) {
        if (isSorted(matrix, n)) {
            cout << rotations << "\n";
            return 0;
        }
        matrix = rotateCounterClockwise(matrix, n);
        rotations++;
    }

    return 0;
}
