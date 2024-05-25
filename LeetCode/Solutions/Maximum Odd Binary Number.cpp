class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        sort(s.rbegin(), s.rend());
        int index;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                index = i;
            }
        }
        swap(s[index], s[n - 1]);
        return s;
    }
};