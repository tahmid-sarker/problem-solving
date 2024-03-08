#include<bits/stdc++.h>
using namespace std;

int main() {
    int initial_hour, initial_minute, final_hour, final_minute;
    int duration;
    cin >> initial_hour >> final_hour >> initial_minute >> final_minute;
    duration = ((initial_minute * 60) + final_minute) - ((initial_hour * 60) + final_hour);
    if (duration <= 0) {
        duration += 24 * 60;
    }
    cout << "O JOGO DUROU " << duration / 60 << " HORA(S) E " << duration % 60 << " MINUTO(S)" << endl;
    return 0;
}