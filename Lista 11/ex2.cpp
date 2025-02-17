#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n), u(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        u[i] = v[i];
    }
    
    // Ordena u para a segunda consulta
    sort(u.begin(), u.end());
    
    // Calcula os prefix sums para v e u
    vector<long long> prefix_v(n + 1, 0), prefix_u(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_v[i] = prefix_v[i - 1] + v[i - 1];
        prefix_u[i] = prefix_u[i - 1] + u[i - 1];
    }
    
    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        
        if (type == 1) {
            cout << prefix_v[r] - prefix_v[l - 1] << endl;
        } else {
            cout << prefix_u[r] - prefix_u[l - 1] << endl;
        }
    }
    
    return 0;
}