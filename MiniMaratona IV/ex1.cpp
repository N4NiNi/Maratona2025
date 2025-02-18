#include <iostream>
using namespace std;

string determineLastPlayer(int n) {
    int x = 0;
    int move = 1;
    bool sakurakoTurn = true;

    while (true) {
        int step = 2 * move - 1;
        if (sakurakoTurn) {
            x -= step;
        } else {
            x += step;
        }

        if (abs(x) > n) {
            return sakurakoTurn ? "Sakurako" : "Kosuke";
        }

        sakurakoTurn = !sakurakoTurn;
        move++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << determineLastPlayer(n) << endl;
    }
    return 0;
}