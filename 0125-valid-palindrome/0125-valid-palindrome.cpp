class Solution {
public:
    
    char lower(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ) {
            return ch;
        }
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool valid (char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') ) {
            cout<<"valid true";
            return true;
        }
        return false;
    }
    
    bool palindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start <= end) {
            if(s[start] != s[end]) {
                return false;
            }
            else {
                start++;
                end--;
            }
        }
        return true;
    }
    
    bool isPalindrome(string s) {
        
        string temp;
        for(int i = 0; i< s.length(); i++) {
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }
        
        for(int i = 0; i < temp.length(); i++) {
            temp[i] = lower(temp[i]);
        }
        
        return palindrome(temp);
        
    }
};