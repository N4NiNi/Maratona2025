#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    int min_sum = 0;
    for (int i = 0; i < k; ++i) {
        min_sum += h[i];
    }
    
    int current_sum = min_sum;
    int min_index = 0;
    
    for (int i = k; i < n; ++i) {
        current_sum += h[i] - h[i - k];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i - k + 1;
        }
    }
    
    cout << min_index + 1 << endl; // +1 porque os índices começam em 1 no problema
    return 0;
}