#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y;
    float Division;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> X >> Y;
        if (Y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            Division = (float)X / Y;
            cout << fixed << setprecision(1) << Division << endl;
        }
    }
    return 0;
}