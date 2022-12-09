class Solution {
public:
    
    void reverseArray(vector<int>& nums, int start, int end) {
        while(start <= end) {
            swap(nums[start++], nums[end--]);
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int start = 0;
        int end = nums.size() - 1;
        reverseArray(nums, start, end);
        reverseArray(nums, start, k-1);
        reverseArray(nums, k, end);
    }
};