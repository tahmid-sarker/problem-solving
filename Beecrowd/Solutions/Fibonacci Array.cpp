#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int Fib[2970];
    Fib[0] = 0;
    Fib[1] = 1;
    for (int i = 2; i < 61; i++) {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << "Fib(" << n << ")" << " = " << Fib[n] << endl;
    }
    return 0;
}