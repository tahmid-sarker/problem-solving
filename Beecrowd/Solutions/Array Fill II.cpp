#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "]" << " = " << count++ << endl;
        if (count == n) {
            count = 0;
        }
    }
    return 0;
}