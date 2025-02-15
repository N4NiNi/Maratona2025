#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> numbers(n);
        for (ll &value : numbers) cin >> value;
        
        ll maxOdd = 0, maxEven = 0;
        for (ll value : numbers) {
            if (value % 2) maxOdd = max(maxOdd, value);
            else maxEven = max(maxEven, value);
        }
        
        bool sameParity = all_of(numbers.begin() + 1, numbers.end(), [&](ll value){ return value % 2 == numbers[0] % 2; });
        if (sameParity) {
            cout << "0\n";
            continue;
        }
        
        int operations = 0;
        sort(numbers.begin(), numbers.end());
        for (ll &value : numbers) {
            if (value % 2 == 0 && value < maxOdd) {
                value += maxOdd;
                maxOdd = max(maxOdd, value);
                operations++;
            }
        }
        
        sameParity = all_of(numbers.begin() + 1, numbers.end(), [&](ll value){ return value % 2 == numbers[0] % 2; });
        if (sameParity) {
            cout << operations << "\n";
            continue;
        }
        
        auto position = find(numbers.begin(), numbers.end(), maxOdd);
        *position = maxOdd + maxEven;
        
        operations += 1 + count_if(numbers.begin(), numbers.end(), [](ll value){ return value % 2 == 0; });
        cout << operations << "\n";
    }
    return 0;
}