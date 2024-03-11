#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M && N != 0 && M != 0) {
        int X[N][M], temp, count = 0;
        for (int i = 0; i < N; i++) {
            temp = 0;
            for (int j = 0; j < M; j++) {
                cin >> X[i][j];
                if (X[i][j] > 0) {
                    temp++;
                }
            }
            if (temp == M) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}