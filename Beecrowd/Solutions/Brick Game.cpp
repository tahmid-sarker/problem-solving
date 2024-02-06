#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int N;
        cin >> N;
        int arr[N];
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        cout << "Case " << i << ": " << arr[N / 2] << endl;
    }
    return 0;
}