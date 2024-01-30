#include<bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;
    int temp = N * 100;
    int money_in_notes = temp / 100;
    int money_in_coins = temp % 100;
    int notes[6] = {100, 50, 20, 10, 5, 2};
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << money_in_notes / notes[i] << " nota(s) de R$ " << notes[i] << ".00" << endl;
        money_in_notes = money_in_notes % notes[i];
    }
    money_in_coins = money_in_notes * 100 + money_in_coins;
    int coins[6] = {100, 50, 25, 10, 5, 1};
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << money_in_coins / coins[i] << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << endl;
        money_in_coins = money_in_coins % coins[i];
    }
    return 0;
}