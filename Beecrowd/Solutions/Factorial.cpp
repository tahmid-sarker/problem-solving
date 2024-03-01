#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, sum = 0;
    int arr[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
    cin >> N;
    for (int i = 7; i >= 0; i--) {
        sum += N / arr[i];
        N %= arr[i];
    }
    cout << sum << endl;
    return 0;
}