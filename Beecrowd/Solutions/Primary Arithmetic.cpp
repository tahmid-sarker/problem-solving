#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b;
    while (cin >> a >> b && (a | b)) {
        long long int temp_a, temp_b, test = 0, count_carry = 0;
        while (a != 0 || b != 0) {
            temp_a = a % 10;
            a = a / 10;
            temp_b = b % 10;
            b = b / 10;
            int result = temp_a + temp_b + test;
            if (result >= 10) {
                test = 1;
                count_carry += 1;
            } else {
                test = 0;
            }
        }
        if (count_carry == 1) {
            cout << count_carry << " carry operation." << endl;
        } else if (count_carry > 1) {
            cout << count_carry << " carry operations." << endl;
        } else {
            cout << "No carry operation." << endl;
        }
    }
    return 0;
}