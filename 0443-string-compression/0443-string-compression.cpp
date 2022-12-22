class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansCount = 0;
        
        while(i < chars.size()) {
            int j = i + 1;
            while(j < chars.size() && chars[i] == chars[j]) {
                j++;
            }
            
            chars[ansCount++] = chars[i];
            int count = j - i;
            if(count > 1) {
                string cnt = to_string(count);
                for(char ch: cnt) {
                    chars[ansCount++] = ch;
                }
            }
            i = j;
        }
        return ansCount;
    }
};