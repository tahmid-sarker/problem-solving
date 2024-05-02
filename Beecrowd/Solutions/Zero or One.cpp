#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    while (cin >> A >> B >> C) {
        if (A == B && B == C && C == A) {
            cout << "*" << endl;
        } else if (A != B && A != C && B == C) {
            cout << "A" << endl;
        } else if (B != A && B != C && A == C) {
            cout << "B" << endl;
        } else if (C != A && C != B && A == B) {
            cout << "C" << endl;
        }
    }
    return 0;
}