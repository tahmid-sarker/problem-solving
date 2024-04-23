#include<bits/stdc++.h>
using namespace std;

int main() {
    char O;
    double M[12][12], sum = 0.0;
    while (cin >> O) {
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                cin >> M[i][j];
                if (j > i && (j + i) < 11) {
                    sum += M[i][j];
                }
            }
        }
        if (O == 'S') {
            cout << fixed << setprecision(1) << sum << endl;
        } else if (O == 'M') {
            cout << fixed << setprecision(1) << sum / 30.0 << endl;
        }
    }
    return 0;
}