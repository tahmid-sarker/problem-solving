class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int maxWid = 0;
        for (int i = 1; i < points.size(); i++) {
            int wid = points[i][0] - points[i - 1][0];
            maxWid = max(maxWid, wid);
        }
        return maxWid;
    }
};