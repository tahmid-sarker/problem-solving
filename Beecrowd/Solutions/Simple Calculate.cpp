#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    float x, y, result;
    cin >> a >> c >> x >> b >> d >> y;
    result = (c * x + d * y);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << result << endl;
    return 0;
}