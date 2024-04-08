#include<bits/stdc++.h>
using namespace std;

int main() {
    float salary, new_salary;
    cin >> salary;
    if (salary > 0 && salary <= 400) {
        new_salary = salary + (float)15 / 100 * salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: 15 %" << endl;
    } else if (salary > 400 && salary <= 800) {
        new_salary = salary + (float)12 / 100 * salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: 12 %" << endl;
    } else if (salary > 800 && salary <= 1200) {
        new_salary = salary + (float)10 / 100 * salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: 10 %" << endl;
    } else if (salary > 1200 && salary <= 2000) {
        new_salary = salary + (float)7 / 100 * salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: 7 %" << endl;
    } else if (salary > 2000) {
        new_salary = salary + (float)4 / 100 * salary;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: 4 %" << endl;
    } else {
        cout << "Not a Valid Input" << endl;
    }
    return 0;
}