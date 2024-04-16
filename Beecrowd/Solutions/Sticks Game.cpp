#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int sum = 0;
        while (N--) {
            int V, C;
            cin >> C >> V;
            if (V % 2 != 0) {
                sum += (V - 1);
            } else {
                sum += V;
            }
        }
        cout << sum / 4 << endl;
    }
    return 0;
}