#include <iostream>
#include <string>

using namespace std;

string singularToPlural(const string& singular) {
    // Verifica se a palavra termina com "us"
    if (singular.length() >= 2 && 
        singular.substr(singular.length() - 2) == "us") {
        // Remove "us" e adiciona "i"
        return singular.substr(0, singular.length() - 2) + "i";
    }
    // Se não terminar com "us", retorna a palavra original (ou pode tratar como erro)
    return singular;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word;
        cin >> word;
        cout << singularToPlural(word) << endl;
    }
    return 0;
}