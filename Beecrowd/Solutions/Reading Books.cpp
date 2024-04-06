#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    while (cin >> Q && Q != 0) {
        int D, P;
        cin >> D >> P;
        int page = (P * D * Q) / (P - Q);
        if (page > 1) {
            cout << page << " paginas" << endl;
        } else {
            cout << page << " pagina" << endl;
        }
    }
    return 0;
}