#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    while (cin.getline(str, 100) && str != NULL) {
        int count = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] != ' ') {
                count++;
                if (str[i] > 96 && count % 2 == 1) {
                    str[i] -= 32;
                } else if (str[i] < 96 && count % 2 == 0) {
                    str[i] += 32;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}