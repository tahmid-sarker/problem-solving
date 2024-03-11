#include<bits/stdc++.h>
using namespace std;

int main() {
    int C_available, B_available, P_available;
    int C_requested, B_requested, P_requested;
    int not_receive = 0;
    cin >> C_available >> B_available >> P_available;
    cin >> C_requested >> B_requested >> P_requested;
    if (C_requested > C_available) {
        not_receive += C_requested - C_available;
    } else if (B_requested > B_available) {
        not_receive += B_requested - B_available;
    } else if (P_requested > P_available) {
        not_receive += P_requested - P_available;
    }
    cout << not_receive << endl;
    return 0;
}