#include<bits/stdc++.h>
using namespace std;

int main() {
    float A, B, Average;
    cin >> A >> B;
    Average = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << Average << endl;
    return 0;
}