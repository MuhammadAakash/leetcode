class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstIndex = 0; 
        int secondIndex = 0;
        vector<int> v;
        while(firstIndex < m && secondIndex < n) {
            if(nums1[firstIndex] <=  nums2[secondIndex]) {
                v.push_back(nums1[firstIndex]);
                firstIndex++;
            }
            else {
                v.push_back(nums2[secondIndex]);
                secondIndex++;
            }
        }
        while(firstIndex < m) {
            v.push_back(nums1[firstIndex]);
            firstIndex++;
        }
        while(secondIndex < n) {
            v.push_back(nums2[secondIndex]);
            secondIndex++;
        }
        for(int i = 0; i<nums1.size(); i++) {
            nums1[i] = v[i];
        }
    }
};