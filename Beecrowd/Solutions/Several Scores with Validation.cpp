#include<bits/stdc++.h>
using namespace std;

int main() {
    int X;
    float Score, arr[2], Average;
    while (true) {
        int count = 0;
        while (true) {
            cin >> Score;
            if (Score >= 0 && Score <= 10) {
                arr[count] = Score;
                count++;
            } else {
                cout << "nota invalida" << endl;
            }
            if (count == 2) {
                Average = (arr[0] + arr[1]) / 2.0;
                cout << "media = " << fixed << setprecision(2) << Average << endl;
                break;
            }
        }
        while (true) {
            cin >> X;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            if (X == 1 || X == 2) {
                break;
            }
        }
        if (X == 1) {
            continue;
        } else {
            break;
        }
    }
    return 0;
}