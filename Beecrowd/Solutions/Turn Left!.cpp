#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        char comand, position = 'N';
        while (N--) {
            cin >> comand;
            if (comand == 'D' && position == 'N') {
                position = 'L';
            } else if (comand == 'E' && position == 'N') {
                position = 'O';
            } else if (comand == 'D' && position == 'O') {
                position = 'N';
            } else if (comand == 'E' && position == 'O') {
                position = 'S';
            } else if (comand == 'D' && position == 'L') {
                position = 'S';
            } else if (comand == 'E' && position == 'L') {
                position = 'N';
            } else if (comand == 'D' && position == 'S') {
                position = 'O';
            } else {
                position = 'L';
            }
        }
        cout << position << endl;
    }
    return 0;
}