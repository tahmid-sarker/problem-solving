#include<bits/stdc++.h>
using namespace std;

int main() {
    char A[100];
    char B[100];
    char C[100];

    cin.getline(A, 100);
    cin.getline(B, 100);
    cin.getline(C, 100);

    cout << A << B << C << endl;
    cout << B << C << A << endl;
    cout << C << A << B << endl;

    for (int i = 0; A[i] != '\0'; i++) {
        if (i == 10) {
            break;
        }
        cout << A[i];
    }
    for (int i = 0; B[i] != '\0'; i++) {
        if (i == 10) {
            break;
        }
        cout << B[i];
    }
    for (int i = 0; C[i] != '\0'; i++) {
        if (i == 10) {
            break;
        }
        cout << C[i];
    }
    cout << endl;
    return 0;
}