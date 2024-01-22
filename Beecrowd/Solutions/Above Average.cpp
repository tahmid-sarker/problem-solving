#include<bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;
    while (C--) {
        int N;
        float sum = 0.000, count = 0.000;
        cin >> N;
        int marks[N];
        for (int i = 0; i < N; i++) {
            cin >> marks[i];
            sum += marks[i];
        }
        sum /= N;
        for (int i = 0; i < N; i++) {
            if (marks[i] > sum) {
                count++;
            }
        }
        cout << fixed << setprecision(3) << count * 100 / N << "%" << endl;
    }
    return 0;
}