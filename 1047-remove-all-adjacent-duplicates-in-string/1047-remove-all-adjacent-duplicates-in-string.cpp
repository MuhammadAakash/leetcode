class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> p;
        p.push(s[0]);
        for(int i = 1; i < s.length(); i++) {
            if(!p.empty()) {
                if(s[i] == p.top()) {
                    p.pop();
                }
                else {
                    p.push(s[i]);
                }

            }
            else {
                p.push(s[i]);
            }
        }
        string r;
        while(!p.empty()) {
            r += p.top();
            p.pop();
        }
        reverse(r.begin(), r.end());
        return r;
    }
};