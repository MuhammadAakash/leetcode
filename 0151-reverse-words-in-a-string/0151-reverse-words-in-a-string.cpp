class Solution {
public:
    string reverseWords(string s) {
        string result;
        int start = 0;
        int end = s.length();

        while(start < end){
            while(start < end && s[start] == ' ') start++;
            if(start >= end) break;
            int j = start + 1;
            while(j < end && s[j] != ' ') j++;
            string sub = s.substr(start, j-start);
            if(result.length() == 0) result = sub;
            else result = sub + " " + result;
            start = j+1;
    }
    return result;
    }
};