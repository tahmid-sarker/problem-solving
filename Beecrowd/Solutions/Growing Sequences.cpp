#include<bits/stdc++.h>
using namespace std;

int main() {
    while (1) {
        int X;
        cin >> X;
        if (X == 0) {
            break;
        } else {
            for (int i = 1; i < X; i++) {
                cout << i << " ";
            }
        }
        cout << X << endl;
    }
    return 0;
}