#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int count_1 = 0, count_2 = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '<') {
                count_2++;
            }
            if (str[i] == '>' && count_2 > 0) {
                count_1++;
                count_2--;
            }
        }
        cout << count_1 << endl;
    }
    return 0;
}