#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, max, min, Sum = 0;
    cin >> X >> Y;
    if (X > Y) {
        max = X;
        min = Y;
    } else {
        max = Y;
        min = X;
    }
    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            Sum = Sum + i;
        }
    }
    cout << Sum << endl;
    return 0;
}