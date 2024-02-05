#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        double calculate = (double)N / 90.00;
        int A, B;
        B = floor(calculate * 1);
        A = ceil(calculate * 7);
        cout << "Brasil " << B << " x Alemanha " << A << endl;
    }
    return 0;
}