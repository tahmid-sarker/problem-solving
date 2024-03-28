#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N >= 2) {
        int arr[N], count = 0;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i < N - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] || arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                count++;
            }
        }
        else if (arr[0] > arr[N - 1] && arr[0] > arr[1] || arr[0] < arr[N - 1] && arr[0] < arr[1]) {
            count++;
        }
        else if (arr[N - 1] > arr[N - 2] && arr[N - 1] > arr[0] || arr[N - 1] < arr[N - 2] && arr[N - 1] < arr[0]) {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}