#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, count = 0, max = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        max += arr[i];
        while (arr[i] % 3 != 0) {
            count++;
            arr[i] -= 1;
        }
    }
    cout << max - count << endl;
    return 0;
}