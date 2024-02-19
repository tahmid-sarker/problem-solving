#include<bits/stdc++.h>
using namespace std;

int main() {
    float x1, x2, y1, y2, Distance;
    cin >> x1 >> y1 >> x2 >> y2;
    Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(4) << Distance << endl;
    return 0;
}