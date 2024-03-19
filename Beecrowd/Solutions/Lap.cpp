#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    while (cin >> X >> Y && X != 0 && Y != 0) {
        int pilot_1 = 0, pilot_2 = 0, count = 1;
        while (true) {
            if (pilot_2 - pilot_1 >= X) {
                break;
            }
            count++;
            pilot_1 += X;
            pilot_2 += Y;
        }
        cout << count << endl;
    }
    return 0;
}