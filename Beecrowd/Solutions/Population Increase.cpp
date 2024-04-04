#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int PA, PB;
        double G1, G2;
        int count = 0;
        cin >> PA >> PB >> G1 >> G2;
        while (PA <= PB) {
            PA += (PA * G1) / 100.0;
            PB += (PB * G2) / 100.0;
            count++;
            if (count > 100) {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (count <= 100) {
            cout << count << " anos." << endl;
        }
    }
    return 0;
}