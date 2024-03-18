#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, max = 0, flag = 0;
    string str[50];
    while (cin >> N && N != 0) {
        if (flag == 1) {
            cout << endl;
        }
        for (int i = 0; i < N; i++) {
            cin >> str[i];
            if (str[i].length() > max) {
                max = str[i].length();
            }
        }
        for (int j = 0; j < N; j++) {
            int temp = str[j].length();
            for (int k = temp; k < max; k++) {
                cout << " ";
            }
            cout << str[j] << endl;
        }
        max = 0;
        flag = 1;
    }
    return 0;
}