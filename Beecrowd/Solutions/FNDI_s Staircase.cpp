#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, H, C, L;
    while (cin >> N >> H >> C >> L) {
        float area = N * sqrt(pow(H, 2) + pow(C, 2)) * L / 10000;
        cout << fixed << setprecision(4) << area << endl;
    }
    return 0;
}