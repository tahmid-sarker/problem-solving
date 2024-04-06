#include<bits/stdc++.h>
using namespace std;

int main() {
    int X1, X2, Y1, Y2;
    while (cin >> X1 >> Y1 >> X2 >> Y2 && X1 != 0 && X2 != 0 && Y1 != 0 &&
           Y2 != 0) {
        if (X1 == X2 && Y1 == Y2) {
            cout << "0" << endl;
        } else if (X1 == X2 || Y1 == Y2) {
            cout << "1" << endl;
        } else {
            int calculate_1 = abs(X1 - X2);
            int calculate_2 = abs(Y1 - Y2);
            if (calculate_1 - calculate_2 == 0) {
                cout << "1" << endl;
            } else {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}