#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, x, y, calculate;
    cin >> N;
    while (N--) {
        cin >> x >> y;
        if (x < 10 && y < 10) {
            break;
        }
        calculate = (x * y) / 2;
        cout << calculate << " cm2" << endl;
    }
    return 0;
}