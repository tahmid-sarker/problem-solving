#include<bits/stdc++.h>
using namespace std;

int main() {
    int age_days;
    cin >> age_days;
    int years = age_days / 365;
    cout << years << " ano(s)" << endl;
    int remaining_days = age_days % 365;
    int months = remaining_days / 30;
    cout << months << " mes(es)" << endl;
    int days = remaining_days % 30;
    cout << days << " dia(s)" << endl;
    return 0;
}