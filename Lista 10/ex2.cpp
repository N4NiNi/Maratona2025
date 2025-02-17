#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int left = 0, right = n - 1;
        while (left < right) {
            if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0')) {
                left++;
                right--;
            } else {
                break;
            }
        }
        
        cout << (right - left + 1) << endl;
    }
    return 0;
}