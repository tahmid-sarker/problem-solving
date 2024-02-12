#include<bits/stdc++.h>
using namespace std;

int main() {
    int L, sum = 0.0;
    char T;
    float M[12][12];
    while (cin >> L >> T) {
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                cin >> M[i][j];
                if (j == L) {
                    sum += M[i][j];
                }
            }
        }
        if (T == 'S') {
            cout << fixed << setprecision(1) << sum << endl;
        } else if (T == 'M') {
            cout << fixed << setprecision(1) << sum / 12.0 << endl;
        }
    }
    return 0;
}