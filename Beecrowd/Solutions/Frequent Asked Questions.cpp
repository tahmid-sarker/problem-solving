#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K, P;
    while (cin >> N >> K && N != 0 && K != 0) {
        int arr[1000] = {0}, count = 0;
        for (int i = 0; i < N; i++) {
            cin >> P;
            arr[P]++;
        }
        for (int i = 0; i < 1000; i++) {
            if (arr[i] >= K) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}