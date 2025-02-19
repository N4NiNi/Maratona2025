#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long totalSum = (long long)n * (n + 1) / 2;

    if (totalSum % 2 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        long long targetSum = totalSum / 2;
        vector<int> set1, set2;

        for (int i = n; i >= 1; --i) {
            if (i <= targetSum) {
                set1.push_back(i);
                targetSum -= i;
            } else {
                set2.push_back(i);
            }
        }

        cout << set1.size() << '\n';
        for (int num : set1) {
            cout << num << ' ';
        }
        cout << '\n';

        cout << set2.size() << '\n';
        for (int num : set2) {
            cout << num << ' ';
        }
        cout << '\n';
    }

    return 0;
}