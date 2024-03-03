#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int calculate = (N * (N + 1)) * (2 * N + 1) / 6;
        cout << calculate << endl;
    }
    return 0;
}