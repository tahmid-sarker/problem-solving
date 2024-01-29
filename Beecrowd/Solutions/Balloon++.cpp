#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int R, L, Ballons;
    cin >> R >> L;
    R = pow(R, 3);
    Ballons = L / ((float)4 / 3 * 3.1415 * R);
    cout << Ballons << endl;
    return 0;
}