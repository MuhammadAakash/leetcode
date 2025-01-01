class Solution {
public:
    int maxScore(string s) {
        int onesCount = 0;
        int zerosCount = 0;
        int bestScore = INT_MIN;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') {
                onesCount++;
            } else {
                zerosCount++;
            }
            
            bestScore = max(bestScore, zerosCount - onesCount);
        }
        
        if (s[s.size() - 1] == '1') {
            onesCount++;
        }
        
        return bestScore + onesCount;
    }
};