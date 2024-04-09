#include<bits/stdc++.h>
using namespace std;

int main() {
    char Name[100];
    cin >> Name;
    double Fixed_Salary, Total_Sales, Total_Salary;
    cin >> Fixed_Salary >> Total_Sales;
    Total_Salary = Fixed_Salary + (Total_Sales * 15)/100;
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " << Total_Salary << endl;
    return 0;
}