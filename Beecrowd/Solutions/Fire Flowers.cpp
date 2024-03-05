#include<bits/stdc++.h>
using namespace std;

int main() {
    int R1, X1, Y1, R2, X2, Y2;
    while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2) {
        double instance = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
        if ((R1 - instance) >= R2) {
            cout << "RICO" << endl;
        } else {
            cout << "MORTO" << endl;
        }
    }
    return 0;
}