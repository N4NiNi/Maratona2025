#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[2001]; // Lista de adjacência para representar a hierarquia
int max_depth = 0;

// Função para calcular a profundidade máxima de um grupo
void dfs(int node, int depth) {
    max_depth = max(max_depth, depth);
    for (int child : adj[node]) {
        dfs(child, depth + 1);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> managers(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> managers[i];
        if (managers[i] != -1) {
            adj[managers[i]].push_back(i); // Construindo a hierarquia
        }
    }

    // Inicia DFS a partir dos funcionários sem gerente
    for (int i = 1; i <= n; i++) {
        if (managers[i] == -1) {
            dfs(i, 1); // Profundidade inicial é 1
        }
    }

    cout << max_depth << endl;
    return 0;
}
