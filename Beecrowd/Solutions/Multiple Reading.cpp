#include<bits/stdc++.h>
using namespace std;

int main() {
    string trace;
    int P, size, count, cycle;
    while (cin >> trace >> P) {
        size = trace.size();
        count = 0, cycle = 0;
        for (int i = 0; i < size; i++) {
            if (trace[i] == 'R') {
                if (count == 0) {
                    cycle++;
                }
                count++;
                if (count == P) {
                    count = 0;
                }
            } else {
                cycle++;
                count = 0;
            }
        }
        cout << cycle << endl;
    }
    return 0;
}