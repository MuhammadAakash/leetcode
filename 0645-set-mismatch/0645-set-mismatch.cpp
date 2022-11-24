class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int res1,res2;
        map<int,int> m;
        for(int x: nums){
            m[x]++;
            if(m[x]==2){res1=x;break;}
        }
        res2=res1;
        for(int i=0;i<n;i++){
            res2^=nums[i]^(i+1);
        }
        return {res1,res2};
    }
};