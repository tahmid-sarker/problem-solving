#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    string str;
    int S, Sum_S = 0, B, Sum_B = 0, A, Sum_A = 0;
    int S1, Sum_S1 = 0, B1, Sum_B1 = 0, A1, Sum_A1 = 0;
    while (T--) {
        cin >> str;
        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;
        Sum_S += S;
        Sum_S1 += S1;
        Sum_B += B;
        Sum_B1 += B1;
        Sum_A += A;
        Sum_A1 += A1;
    }
    float successful_services = ((float)Sum_S1 / Sum_S) * 100;
    float successful_blocks = ((float)Sum_B1 / Sum_B) * 100;
    float successful_attacks = ((float)Sum_A1 / Sum_A) * 100;
    cout << "Pontos de Saque: " << fixed << setprecision(2) << successful_services << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << successful_blocks << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << successful_attacks << " %." << endl;
    return 0;
}