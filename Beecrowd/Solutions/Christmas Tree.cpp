#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        for (int i = 1; i <= N / 2 + 1; i++) {
            for (int j = i; j <= N / 2; j++) {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 1; i <= N / 2 + 1; i++) {
            for (int j = i; j <= N / 2; j++) {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << "*";
            }
            cout << endl;
            if (i == 2)
                break;
        }
        cout << endl;
    }
    return 0;
}