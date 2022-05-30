class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low, high, mid;
        high = nums.size() - 1;
        mid = low = 0;

        while (mid <= high)
        {
            if (nums[mid] == 1) ++mid;
            else if (nums[mid] == 0)
            swap(nums[mid++], nums[low++]);
            else if (nums[mid] == 2)
            swap(nums[mid], nums[high--]);
        }
        for (auto x : nums)
        cout << x << " "; 
    }
};