#include<bits/stdc++.h>
using namespace std;

int main() {
    int B, N;
    while (cin >> B >> N && B != 0 && N != 0) {
        int D, C, V, R[B], count = 0;
        for (int i = 1; i <= B; i++) {
            cin >> R[i];
        }
        for (int i = 1; i <= N; i++) {
            cin >> D >> C >> V;
            R[D] -= V;
            R[C] += V;
        }
        for (int i = 1; i <= B; i++) {
            if (R[i] < 0) {
                count++;
            }
        }
        if (count++) {
            cout << "N" << endl;
        } else {
            cout << "S" << endl;
        }
    }
    return 0;
}