#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long int N, S;
        cin >> N;
        S = (-1 + sqrt(1 + 8 * N)) / 2;
        cout << S << endl;
    }
    return 0;
}