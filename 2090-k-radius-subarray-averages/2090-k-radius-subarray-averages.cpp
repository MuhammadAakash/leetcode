class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k == 0) {
            return nums;
        }
        int n = nums.size();
        vector<int> averages(n, -1);
        
        if(2 * k + 1 > n) {
            return averages;
        }
        
        vector<long long> prefix(n + 1);
        
        for(int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        
        for(int i = k; i < (n - k); ++i) {
            int leftBound = i - k;
            int rightBound = i + k;
            long long subArraySum = prefix[rightBound + 1] - prefix[leftBound];
            int average = subArraySum / (2 * k +1);
            averages[i] = average;
        }
        return averages;
    }
};