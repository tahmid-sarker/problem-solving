#include<bits/stdc++.h>
using namespace std;

int main() {
    int P, N;
    cin >> P >> N;
    int arr[N];
    cin >> arr[0];
    for (int i = 1; i < N; i++) {
        cin >> arr[i];
        if (abs(arr[i] - arr[i - 1]) > P) {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }
    cout << "YOU WIN" << endl;
    return 0;
}