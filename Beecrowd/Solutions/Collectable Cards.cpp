#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, F1, F2;
    int temp_1, temp_2, calculate;
    cin >> N;
    while (N--) {
        while (cin >> F1 >> F2 && F1 != 0 && F2 != 0) {
            if (F1 > F2) {
                temp_1 = F2;
                temp_2 = F1;
            } else {
                temp_1 = F1;
                temp_2 = F2;
            }
            while (temp_1 % temp_2 != 0) {
                calculate = temp_1 % temp_2;
                temp_1 = temp_2;
                temp_2 = calculate;
            }
            cout << calculate << endl;
        }
    }
    return 0;
}