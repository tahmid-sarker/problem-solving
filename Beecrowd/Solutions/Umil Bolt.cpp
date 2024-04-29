#include<bits/stdc++.h>
using namespace std;

int main() {
    int Number_of_Attempts;
    float Fastest_Attempt, Attempt;
    while (cin >> Number_of_Attempts) {
        Fastest_Attempt = 11;
        while (Number_of_Attempts--) {
            cin >> Attempt;
            if (Attempt < Fastest_Attempt) {
                Fastest_Attempt = Attempt;
            }
        }
        cout << Fastest_Attempt << endl;
    }
    return 0;
}