#include<bits/stdc++.h>
using namespace std;

int main() {
    float N1, N2, N3, N4, N5, Average, Final_Avarage;
    cin >> N1 >> N2 >> N3 >> N4;
    Average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    cout << "Media: " << fixed << setprecision(1) << Average << endl;
    if (Average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (Average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        cin >> N5;
        cout << "Nota do exame: " << N5 << endl;
        Final_Avarage = (Average + N5) / 2;
        if (Final_Avarage >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << Final_Avarage
             << endl;
    }
    return 0;
}