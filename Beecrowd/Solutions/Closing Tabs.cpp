#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string str;
    cin >> N >> M;
    while (M--) {
        cin >> str;
        if (str == "fechou") {
            N++;
        }
        if (str == "clicou") {
            N--;
        }
    }
    cout << N << endl;
    return 0;
}