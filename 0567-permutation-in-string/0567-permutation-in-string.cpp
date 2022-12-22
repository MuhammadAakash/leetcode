class Solution {
private: bool checkEqual(int count1[26], int count2[26]) {
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i = 0; i < s1.length(); i++) {
            count1[s1[i]- 'a']++;
        }
        
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        
        while(i < windowSize && i < s2.length()) {
            count2[s2[i] - 'a']++;
            i++;
        }
        
        if(checkEqual(count1, count2)) {
            return true;
        }
        
        while(i< s2.length()) {
            count2[s2[i] - 'a']++;
            
            count2[s2[i - windowSize] - 'a']--;
            i++;
            if(checkEqual(count1, count2)) {
                return true;
            }
        }
        return false;
    }
};