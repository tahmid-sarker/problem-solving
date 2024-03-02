#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M && N != 0 && M != 0) {
        int T, count = 0, arr[10001] = {0};
        for (int i = 0; i < M; i++) {
            cin >> T;
            arr[T]++;
            if (arr[T] == 2) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}