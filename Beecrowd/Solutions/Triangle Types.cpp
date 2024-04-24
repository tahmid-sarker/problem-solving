#include<bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    if (A >= B + C || B >= A + C || C >= A + B) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (A * A > B * B + C * C || B * B > A * A + C * C || C * C > A * A + B * B) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (A * A < B * B + C * C || B * B < A * A + C * C || C * C < A * A + B * B) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    } else if (A == B && B == C) {
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (A == B && A != C || B == C && B != A || C == A && C != B) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}