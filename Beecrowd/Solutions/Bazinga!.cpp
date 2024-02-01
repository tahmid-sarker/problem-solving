#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string A, B;
    for (int i = 1; i <= N; i++) {
        cin >> A >> B;
        if (A == B) {
            cout << "Caso #" << i << ": De novo!" << endl;
        } else if (A == "tesoura" && B == "papel") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "papel" && B == "pedra") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "pedra" && B == "lagarto") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "lagarto" && B == "Spock") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "Spock" && B == "tesoura") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "tesoura" && B == "lagarto") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "lagarto" && B == "papel") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "papel" && B == "Spock") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "Spock" && B == "pedra") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else if (A == "pedra" && B == "tesoura") {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        } else {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }
    return 0;
}