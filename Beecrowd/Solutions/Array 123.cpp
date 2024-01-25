#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N >= 3) {
        int arr[N][N];
        int count = N - 1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = 3;
                }
                if (j == count) {
                    arr[i][j] = 2;
                }
            }
            count--;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}