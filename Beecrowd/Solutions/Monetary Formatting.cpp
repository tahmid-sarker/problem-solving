#include<bits/stdc++.h>
using namespace std;

int main() {
    int size_1, size_2;
    string str1, str2;
    while (getline(cin, str1) && getline(cin, str2)) {
        size_1 = str1.size();
        size_2 = str2.size();
        cout << "$";
        for (int i = 0; i < size_1; i++) {
            if ((size_1 - i) % 3 == 0 && i > 0) {
                cout << ",";
            }
            cout << str1[i];
        }
        cout << ".";
        if (size_2 < 2) {
            cout << "0";
        }
        for (int i = 0; i < size_2; i++) {
            cout << str2[i];
        }
        cout << endl;
    }
    return 0;
}