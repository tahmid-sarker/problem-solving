#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string x[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string y[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string z[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string Roman_numerals = x[N / 100] + y[(N % 100) / 10] + z[N % 10];
    cout << Roman_numerals << endl;
    return 0;
}