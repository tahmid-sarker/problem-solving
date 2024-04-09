#include<bits/stdc++.h>
using namespace std;

int main() {
    int Number, Hour;
    float Amount, Salary;
    cin >> Number >> Hour >> Amount;
    Salary = (Amount * Hour);
    cout << "NUMBER = " << Number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << Salary << endl;
    return 0;
}