#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int X;
        cin >> X;
        int count = 1;
        if (X == 2) {
            count = 1;
        } else if (X % 2 == 0) {
            count = 0;
        } else {
            for (int i = 3; i < sqrt(X); i += 2) {
                if (X % i == 0) {
                    count = 0;
                    break;
                }
            }
        }
        if (count == 1) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}