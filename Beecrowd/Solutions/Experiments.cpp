#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Rabbit, Rat, Frog, Sum;
    cin >> N;
    Rabbit = Rat = Frog = Sum = 0;
    while (N--) {
        int Amount;
        char Type;
        cin >> Amount >> Type;
        Sum += Amount;
        if (Type == 'C') {
            Rabbit += Amount;
        }
        else if (Type == 'R') {
            Rat += Amount;
        }
        else if (Type == 'S') {
            Frog += Amount;
        }
    }
    cout << "Total: " << Sum << " cobaias" << endl;
    cout << "Total de coelhos: " << Rabbit << endl;
    cout << "Total de ratos: " << Rat << endl;
    cout << "Total de sapos: " << Frog << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (float)Rabbit / Sum * 100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (float)Rat / Sum * 100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (float)Frog / Sum * 100 << " %" << endl;
    return 0;
}