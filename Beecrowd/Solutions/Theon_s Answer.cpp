#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, T, min = 2970, count = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T;
        if (T < min) {
            min = T;
            count = i + 1;
        }
    }
    cout << count << endl;
    return 0;
}