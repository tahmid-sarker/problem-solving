#include<bits/stdc++.h>
using namespace std;

int main() {
    int spent_time, average_speed;
    double liters;
    cin >> spent_time >> average_speed;
    liters = (spent_time * average_speed) / 12.0;
    cout << fixed;
    cout << setprecision(3) << liters << endl;
    return 0;
}