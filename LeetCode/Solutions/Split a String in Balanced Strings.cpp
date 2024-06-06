class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0;
        int countL = 0;
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                countR++;
            } else if (s[i] == 'L') {
                countL++;
            }
            if (countR == countL) {
                result++;
                countR = 0;
                countL = 0;
            }
        }
        return result;
    }
};