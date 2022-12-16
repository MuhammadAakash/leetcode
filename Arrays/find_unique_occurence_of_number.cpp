#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
            // cout<<"M "<<m[arr[i]] << endl;
        }
        unordered_map<int, int> m1;
        for(auto i:m) {
            cout<<"I.first is: " <<i.first << endl;
            cout<<"I.second is: " <<i.second << endl;
            m1[i.second];
            
        }
        if(m.size() == m1.size()) {
            return true;
        }
        return false;
    }

int main () {
    vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    bool unique_occurence = uniqueOccurrences(arr);
    cout << unique_occurence;
}