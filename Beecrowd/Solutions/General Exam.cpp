#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    while (cin >> N >> Q && N != 0 && Q != 0) {
        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + N, greater<int>());
        int p;
        for (int i = 0; i < Q; i++) {
            cin >> p;
            cout << arr[p - 1] << endl;
        }
    }
    return 0;
}