#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long totalSum = (long long)n * (n + 1) / 2; // Soma esperada de 1 a n
    long long givenSum = 0;

    for (int i = 0; i < n - 1; ++i) {
        int num;
        cin >> num;
        givenSum += num;
    }

    long long missingNumber = totalSum - givenSum;
    cout << missingNumber << '\n';

    return 0;
}