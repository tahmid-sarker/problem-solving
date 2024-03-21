#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, count = 0;
    cin >> X >> Y;
    for (int i = 1; i <= Y; i++) {
        count++;
        cout << i;
        if (count == X) {
            cout << endl;
            count = 0;
        } else {
            cout << " ";
        }
    }
    return 0;
}