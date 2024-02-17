#include<bits/stdc++.h>
using namespace std;

int main() {
    int DD, MM, YY;
    char slash;
    cin >> DD >> slash >> MM >> slash >> YY;
    cout << setw(2) << setfill('0') << MM << "/" << setw(2) << setfill('0') << DD << "/" << setw(2) << setfill('0') << YY << endl;
    cout << setw(2) << setfill('0') << YY << "/" << setw(2) << setfill('0') << MM << "/" << setw(2) << setfill('0') << DD << endl;
    cout << setw(2) << setfill('0') << DD << "-" << setw(2) << setfill('0') << MM << "-" << setw(2) << setfill('0') << YY << endl;
    return 0;
}