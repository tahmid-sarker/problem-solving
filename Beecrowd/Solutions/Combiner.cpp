#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string str_1, str_2;
        cin >> str_1 >> str_2;
        int len_1 = str_1.length();
        int len_2 = str_2.length();
        int size = max(len_1, len_2);
        for (int j = 0; j < size; j++) {
            if (j < len_1) {
                cout << str_1[j];
            }
            if (j < len_2) {
                cout << str_2[j];
            }
        }
        cout << endl;
    }
    return 0;
}
