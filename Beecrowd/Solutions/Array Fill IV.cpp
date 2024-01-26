#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int par[5], impar[5];
    int x = 0, y = 0, count;
    for (int i = 0; i < 15; i++) {
        cin >> N;
        if (N % 2 == 0) {
            par[x] = N;
            x++;
        } else {
            impar[y] = N;
            y++;
        }
        if (x == 5) {
            count = 0;
            while (count != 5) {
                cout << "par[" << count << "] = " << par[count] << endl;
                count++;
            }
            x = 0;
        }
        if (y == 5) {
            count = 0;
            while (count != 5) {
                cout << "impar[" << count << "] = " << impar[count] << endl;
                count++;
            }
            y = 0;
        }
        if (i == 14) {
            count = 0;
            while (count < y) {
                cout << "impar[" << count << "] = " << impar[count] << endl;
                count++;
            }
            count = 0;
            while (count < x) {
                cout << "par[" << count << "] = " << par[count] << endl;
                count++;
            }
        }
    }
    return 0;
}