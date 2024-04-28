#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N + 1][N + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1] < 2) {
                cout << "U";
            } else {
                cout << "S";
            }
        }
        cout << endl;
    }
    return 0;
}