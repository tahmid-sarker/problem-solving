#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Notes[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> N;
    cout << N << endl;
    for (int i = 0; i < 7; i++) {
        cout << N / Notes[i] << " nota(s) de R$ " << Notes[i] << ",00" << endl;
        N = N % Notes[i];
    }
    return 0;
}