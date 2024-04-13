#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.sync_with_stdio(false);
    int T;
    cin >> T;
    int digit[] = {1, 7, 9, 3};
    while (T--) {
        int N;
        cin >> N;
        cout << digit[N % 4] << "\n";
    }
    return 0;
}