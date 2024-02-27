#include<bits/stdc++.h>
using namespace std;

int main() {
    int startDay, endDay, startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    string ignore;

    cin >> ignore >> startDay;
    cin >> startHour;
    cin.ignore(1, ':');
    cin >> startMinute;
    cin.ignore(1, ':');
    cin >> startSecond;

    cin >> ignore >> endDay;
    cin >> endHour;
    cin.ignore(1, ':');
    cin >> endMinute;
    cin.ignore(1, ':');
    cin >> endSecond;

    int days = endDay - startDay;
    int hours = endHour - startHour;
    int minutes = endMinute - startMinute;
    int seconds = endSecond - startSecond;

    if (seconds < 0) {
        seconds += 60;
        minutes--;
    }
    if (minutes < 0) {
        minutes += 60;
        hours--;
    }
    if (hours < 0) {
        hours += 24;
        days--;
    }

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}