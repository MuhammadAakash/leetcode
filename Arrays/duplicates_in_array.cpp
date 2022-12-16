#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


int find_duplicate(vector<int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans = ans^arr[i];
    }
    for(int i = 0; i < arr.size(); i++) { 
        ans = ans^i;
    }
    return ans;
}
int main() {
    vector<int> vec = {1,2,3,4,2};
    int duplicate = find_duplicate(vec);
    cout<< "Duplicate number is " << duplicate;
}