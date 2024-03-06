#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string A, B;
        int count = 0, v = 0;
        cin >> A >> B;
        int len_1 = A.size();
        int len_2 = B.size();
        int difference = len_1 - len_2;
        for (int i = difference; i < len_1; i++) {
            if (A[i] == B[v]) {
                count++;
            }
            v++;
        }
        if (count == len_2) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }
    return 0;
}