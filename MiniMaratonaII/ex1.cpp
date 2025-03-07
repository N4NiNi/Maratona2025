#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
		string a;
        int n, m;
        cin >> n >> m;
        cin >> a;
        
        unordered_map<char, int> problem_count;
        
        for (char ch = 'A'; ch <= 'G'; ++ch) {
            problem_count[ch] = 0;
        }
        
        for (char ch : a) {
            problem_count[ch]++;
        }
        
        int additional_problems = 0;
        for (char ch = 'A'; ch <= 'G'; ++ch) {
            if (problem_count[ch] < m) {
                additional_problems += m - problem_count[ch];
            }
        }
        
        cout << additional_problems << endl;
    }
    
    return 0;
}