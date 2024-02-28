#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Z, count = 1, sum = 0;
    cin >> X >> Z;
    while (X >= Z) {
        cin >> Z;
    }
    for (int i = X; i < Z; i++) {
        sum += i;
        if (sum > Z) {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}