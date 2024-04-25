#include<bits/stdc++.h>
using namespace std;

int main() {
    float A, B, C, Perimeter, Area;
    cin >> A >> B >> C;
    if (A < (B + C) && B < (A + C) && C < (A + B)) {
        Perimeter = A + B + C;
        cout << "Perimetro = " << fixed << setprecision(1) << Perimeter << endl;
    } else {
        Area = 0.5 * (A + B) * C;
        cout << "Area = " << fixed << setprecision(1) << Area << endl;
    }
    return 0;
}