#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '1')
            count++;
    }
    if (count % 2 == 0) {
        S += '0';
    } else {
        S += '1';
    }
    cout << S << endl;
    return 0;
}