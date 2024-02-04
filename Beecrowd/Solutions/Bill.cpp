#include<bits/stdc++.h>
using namespace std;

int main() {
    int C, N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> C;
        if (C % 2 == 0) {
            cout << "0" << endl;
        } else {
            cout << "1" << endl;
        }
    }
    return 0;
}