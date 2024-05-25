class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;
        int size = sentences.size();
        for (int i = 0; i < size; i++) {
            int count = 1;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }
            maximum = max(maximum, count);
        }
        return maximum;
    }
};