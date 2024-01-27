#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int difference = (A + D) - (B + C);
    cout << abs(difference) << endl;
    return 0;
}