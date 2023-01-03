class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int column = strs[0].size();
        int ans  = 0;
        
        for(int j = 0; j < column; j++) {
            for(int i = 1; i < rows; i++) {
                if(strs[i][j] < strs[i - 1][j]) {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};