#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    char str[50], A;
    while (N--) {
        cin >> str >> X;
        for (int i = 0; i < strlen(str); i++) {
            A = str[i] - X;
            if (A < 65) {
                A += 26;
            }
            cout << A;
        }
        cout << endl;
    }
    return 0;
}