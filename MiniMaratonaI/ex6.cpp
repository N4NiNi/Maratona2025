#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, f;
    cin >> n >> f;
    vector<pair<long long, long long>> days(n);
    for (int i = 0; i < n; ++i) {
        cin >> days[i].first >> days[i].second;
    }

    vector<long long> benefits;
    long long total = 0;

    for (int i = 0; i < n; ++i) {
        long long k = days[i].first;
        long long l = days[i].second;
        long long sold = min(k, l);
        long long potential = min(2 * k, l);
        benefits.push_back(potential - sold);
        total += sold;
    }

    sort(benefits.rbegin(), benefits.rend());

    for (int i = 0; i < f; ++i) {
        total += benefits[i];
    }

    cout << total << endl;

    return 0;
}