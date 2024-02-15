#include<bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;
    while (C--) {
        string str;
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--) {
            if (str[i] >= 97 && str[i] <= 122) {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}