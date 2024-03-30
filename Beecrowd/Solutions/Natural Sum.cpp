#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int A, B, Sum;
    cin >> A >> B;
    Sum = (A + B) * (B - A + 1) / 2;
    cout << Sum << endl;
    return 0;
}