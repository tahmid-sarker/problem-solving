#include<bits/stdc++.h>
using namespace std;

int main() {
    float A, B;
    cin >> A >> B;
    float increase_price = B - A;
    float increase_price_percent = (increase_price * 100.00) / A;
    cout << fixed << setprecision(2) << increase_price_percent << "%" << endl;
    return 0;
}