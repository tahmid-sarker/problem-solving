class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        int size = words.size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};