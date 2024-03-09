#include<bits/stdc++.h>
using namespace std;

int main() {
    int start, end, time = 0;
    cin >> start >> end;
    if (start < end) {
        time = end - start;
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    } else if (start > end) {
        time = 24 - (start - end);
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    } else if (start == end) {
        time = 24;
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    }
    return 0;
}