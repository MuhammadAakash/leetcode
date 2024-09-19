class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequencies;
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            frequencies[arr[i]]++;
        }
        unordered_set<int> st;

        for(auto [values, occurances] : frequencies) {
            if(st.count(occurances) != 0) {
                return false;
            }
            st.insert(occurances);
        }
        return true;
    }
};