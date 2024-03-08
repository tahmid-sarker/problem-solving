#include<bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;
    cin.ignore();
    while (C--) {
        string str;
        getline(cin, str);
        int len = str.size();
        double T = len * 0.01;
        cout << fixed << setprecision(2) << T << endl;
    }
    return 0;
}