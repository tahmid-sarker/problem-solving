#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X, count;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> X;
        count = 0;
        for (int j = 2; j < X; j++) {
            if (X % j == 0) {
                count++;
            }
        }
        if (count == 0) {
            cout << X << " eh primo" << endl;
        } else {
            cout << X << " nao eh primo" << endl;
        }
    }
    return 0;
}