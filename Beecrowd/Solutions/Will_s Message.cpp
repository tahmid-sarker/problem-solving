#include<bits/stdc++.h>
using namespace std;

int main() {
    string messages;
    while (cin >> messages) {
        int number_of_commands, index;
        cin >> number_of_commands;
        for (int i = 0; i < number_of_commands; i++) {
            cin >> index;
            cout << messages[index - 1];
        }
        cout << endl;
    }
    return 0;
}