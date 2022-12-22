class Solution {
public:
    string removeDuplicates(string s) {
        string t;
        for(char x:s) {
            if(!t.empty() && t.back() == x) 
                t.pop_back();
            else
                t.push_back(x);
        }
        return t;
    }
};