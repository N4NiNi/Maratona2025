#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_moves(int n, vector<int>& a) {
    int min_pos = min_element(a.begin(), a.end()) - a.begin();
    int max_pos = max_element(a.begin(), a.end()) - a.begin();

    if (min_pos > max_pos) {
        swap(min_pos, max_pos);
    }

    int option1 = max_pos + 1;
    int option2 = n - min_pos;
    int option3 = (min_pos + 1) + (n - max_pos);

    return min({option1, option2, option3});
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; // Lê o número de pedras

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Lê os poderes das pedras
        }

        int result = min_moves(n, a);
        cout << result << endl; 
    }

    return 0;
}