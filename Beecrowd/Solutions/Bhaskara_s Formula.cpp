#include<bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C, temp;
    cin >> A >> B >> C;
    temp = pow(B, 2) - 4 * A * C;
    if (temp > 0 && A != 0) {
        double x, y;
        temp = sqrt(temp);
        x = (-B + temp) / (2 * A);
        y = (-B - temp) / (2 * A);
        cout << fixed;
        cout << setprecision(5) << "R1 = " << x << endl;
        cout << setprecision(5) << "R2 = " << y << endl;
    } else {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}