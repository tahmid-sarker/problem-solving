#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    while (cin >> A >> B >> C && A != 0 && B != 0 && C != 0) {
        int calculate = A * B * C;
        int answer = (int)cbrt(calculate);
        cout << answer << endl;
    }
    return 0;
}