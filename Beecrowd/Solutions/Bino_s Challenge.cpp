#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, L, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> L;
        if (L % 2 == 0) {
            count_2++;
        } else if (L % 3 == 0) {
            count_3++;
        } else if (L % 4 == 0) {
            count_4++;
        } else if (L % 5 == 0) {
            count_5++;
        }
    }
    cout << count_2 << " Multiplo(s) de 2" << endl;
    cout << count_3 << " Multiplo(s) de 3" << endl;
    cout << count_4 << " Multiplo(s) de 4" << endl;
    cout << count_5 << " Multiplo(s) de 5" << endl;
    return 0;
}