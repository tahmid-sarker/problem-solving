#include<bits/stdc++.h>
using namespace std;

int main() {
    double V, D, R, Area, Height;
    while (cin >> V >> D) {
        R = D / 2;
        Area = 3.14 * pow(R, 2);
        Height = V / Area;
        cout << "ALTURA = " << fixed << setprecision(2) << Height << endl;
        cout << "AREA = " << fixed << setprecision(2) << Area << endl;
    }
    return 0;
}