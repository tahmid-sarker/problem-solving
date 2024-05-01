#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    while (cin >> T >> N && T >= 2) {
        int Total_points = 3 * N;
        int Match_draw = 0;
        for (int i = 0; i < T; i++) {
            string str;
            int Points;
            cin >> str >> Points;
            Match_draw += Points;
        }
        cout << Total_points - Match_draw << endl;
    }
    return 0;
}