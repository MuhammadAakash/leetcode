class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        int endPoint = INT_MAX;
        sort(points.begin(), points.end());
        
        for(auto p: points) {
            int start = p[0];
            int end = p[1];
            if(endPoint < start) {
                ans++;
                endPoint = end;
            }
            else {
                endPoint = min(endPoint, end);
            }
        }
        return ans;
    }
};