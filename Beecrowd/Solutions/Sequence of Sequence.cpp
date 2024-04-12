#include<bits/stdc++.h>
using namespace std;

int main() {
    int X = 0, N, Total_Quantity_of_Numbers;
    while (cin >> N) {
        X++;
        Total_Quantity_of_Numbers = 1 + (N * (N + 1)) / 2;
        if (N == 0) {
            cout << "Caso " << X << ": " << Total_Quantity_of_Numbers << " numero" << endl;
        } else {
            cout << "Caso " << X << ": " << Total_Quantity_of_Numbers << " numeros" << endl;
        }
        cout << "0";
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " " << i;
            }
        }
        cout << endl << endl;
    }
    return 0;
}