#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        int min = INT_MAX;
        string temp;
        while (N--) {
            int A, T;
            string Hello_Galaxy_Message, Temp;
            cin >> Hello_Galaxy_Message >> A >> T;
            if (min > (A - T)) {
                min = A - T;
                temp = Hello_Galaxy_Message;
            }
        }
        cout << temp << endl;
    }
    return 0;
}