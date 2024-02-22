#include<bits/stdc++.h>
using namespace std;

int main() {
    int First = 0, Second = 1, Count = 0, Fibo, N;
    cin >> N;
    while (Count < N - 1) {
        cout << First << " ";
        Fibo = First + Second;
        First = Second;
        Second = Fibo;
        Count++;
    }
    cout << First << endl;
    return 0;
}