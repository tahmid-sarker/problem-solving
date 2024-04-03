#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int X, sum = 0;
        cin >> X;
        for (int i = 1; i < X; i++) {
            if (X % i == 0) {
                sum += i;
            }
        }
        if (X == sum) {
            cout << X << " eh perfeito" << endl;
        } else {
            cout << X << " nao eh perfeito" << endl;
        }
    }
    return 0;
}