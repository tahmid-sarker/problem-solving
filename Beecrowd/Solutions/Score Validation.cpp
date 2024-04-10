#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    float Score, arr[2], Average;
    while (true) {
        cin >> Score;
        if (Score >= 0.0 && Score <= 10.0) {
            arr[count] = Score;
            count++;
        } else {
            cout << "nota invalida" << endl;
        }
        if (count > 1) {
            break;
        }
    }
    Average = (arr[0] + arr[1]) / 2.0;
    cout << "media = " << Average << endl;
    return 0;
}