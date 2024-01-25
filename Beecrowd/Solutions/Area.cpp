#include<bits/stdc++.h>
using namespace std;

int main() {
    float A, B, C, triangle, radius, trapezium, square, rectangle;
    cin >> A >> B >> C;
    triangle = 0.5 * A * C;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    radius = 3.14159 * pow(C, 2);
    cout << "CIRCULO: " << fixed << setprecision(3) << radius << endl;
    trapezium = (float)(A + B) / 2 * C;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    square = pow(B, 2);
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    rectangle = (A * B);
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;
    return 0;
}