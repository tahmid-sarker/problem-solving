#include<bits/stdc++.h>
using namespace std;

int main() {
    while (1) {
        int M, N, temp, Sum = 0;
        cin >> M >> N;
        if (M <= 0 || N <= 0) {
            break;
        } else {
            if (M > N) {
                temp = M;
                M = N;
                N = temp;
            }
            for (int i = M; i <= N; i++) {
                cout << i << " ";
                Sum += i;
            }
            cout << "Sum=" << Sum << endl;
        }
    }
    return 0;
}