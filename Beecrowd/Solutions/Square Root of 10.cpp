#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    double calculate = 0.0;
    cin >> N;
    while (N--) {
        calculate += 6.00;
        calculate = 1.00 / calculate;
    }
    calculate += 3.00;
    cout << fixed << setprecision(10) << calculate << endl;
    return 0;
}