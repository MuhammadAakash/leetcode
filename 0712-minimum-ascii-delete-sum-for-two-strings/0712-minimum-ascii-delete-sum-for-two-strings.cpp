class Solution {
public:
int dp[1002][1002];
int solve(string &s1,string &s2,int i,int j){
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i==s1.size()){
        int sum=0;
        for(int k=j;k<s2.size();k++){
         sum=sum+(int)s2[k];
        }
        return sum;
    }
    if(j==s2.size()){
        int sum=0;
        for(int k=i;k<s1.size();k++){
         sum=sum+(int)s1[k];
        }
        return sum;
    }
    int mx=1e9;
     int nt=min(s1[i]+solve(s1,s2,i+1,j),s2[j]+solve(s1,s2,i,j+1));
     int tk=1e9;
     if(s1[i]==s2[j]){
       tk=solve(s1,s2,i+1,j+1);
     }
     return dp[i][j]=min(nt,tk);
}
    int minimumDeleteSum(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,0,0);
    }
};