#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, sum = 0, pos = 0;
        cin >> N;
        for (int i = 0; i < N; i++) {
            string str;
            cin >> str;
            for (int j = 0; j < str.length(); j++) {
                char c = str[j];
                int difference = c - 65;
                sum += j + difference + pos;
            }
            pos++;
        }
        cout << sum << endl;
    }
    return 0;
}