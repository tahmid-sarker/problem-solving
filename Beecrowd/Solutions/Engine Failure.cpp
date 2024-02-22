#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int R, speed_fall = 0, temp = 0, count = 0, condition = 1;
        while (N--) {
            cin >> R;
            count++;
            if (R < temp && condition == 1) {
                speed_fall = count;
                condition = 0;
            }
            temp = R;
        }
        cout << speed_fall << endl;
    }
    return 0;
}