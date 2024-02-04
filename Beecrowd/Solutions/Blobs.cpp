#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Day;
    float X;
    cin >> N;
    while (N--) {
        Day = 0;
        cin >> X;
        while (X > 1) {
            X /= 2;
            Day++;
        }
        cout << Day << " dias" << endl;
    }
    return 0;
}