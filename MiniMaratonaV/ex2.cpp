#include <iostream>
#include <string>

using namespace std;

void minimizeStringLength(int t, string s[], int testCases) {
    for (int i = 0; i < t; ++i) {
        int length = s[i].length();
        bool find = false;

        for (int j = 0; j < length - 1; ++j) {
            if (s[i][j] == s[i][j + 1]) {
                find = true;
                break;
            }
        }

        if (find) {
            length = 1;
        }

        cout << length;
        if (i != testCases - 1) {
            cout << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    string s[100]; // Assumindo que o número máximo de casos de teste é 100

    for (int i = 0; i < t; ++i) {
        cin >> s[i];
    }

    minimizeStringLength(t, s, t);
    return 0;
}