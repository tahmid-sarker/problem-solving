#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X, arr[2001] = {0};
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> X;
        arr[X]++;
    }
    for (int i = 1; i <= 2000; i++) {
        if (arr[i] > 0) {
            cout << i << " aparece " << arr[i] << " vez(es)" << endl;
        }
    }
    return 0;
}