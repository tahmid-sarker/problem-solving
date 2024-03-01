#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int M, N, fact[20];
    fact[0] = 1;
    for (int i = 1; i <= 20; i++) {
        fact[i] = i * fact[i - 1];
    }
    while (cin >> M >> N) {
        cout << fact[M] + fact[N] << endl;
    }
    return 0;
}