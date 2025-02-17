#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int min_repaint = k; // Inicializa com o máximo possível
        int current_repaint = 0;
        
        // Inicializa a janela deslizante
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') {
                current_repaint++;
            }
        }
        min_repaint = min(min_repaint, current_repaint);
        
        // Move a janela deslizante
        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') {
                current_repaint--;
            }
            if (s[i] == 'W') {
                current_repaint++;
            }
            min_repaint = min(min_repaint, current_repaint);
        }
        
        cout << min_repaint << endl;
    }
    return 0;
}