#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int Hashmats_army, Opponents_army, Difference;
    while (cin >> Hashmats_army >> Opponents_army) {
        Difference = abs(Hashmats_army - Opponents_army);
        cout << Difference << endl;
    }
    return 0;
}