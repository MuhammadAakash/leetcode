#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

vector<int> find_duplicates(vector<int> arr)
{
    map<int, int> m;
    for (auto x : arr)
    {
        m[x]++;
    }
    vector<int> v;
    for (auto x : m)
    {
        if (x.second == 2)
        {
            cout << "X First is : " << x.first << endl;
            cout << "X Second is : " << x.second << endl;
            v.push_back(x.first);
        }
    }
    // cout << v.data();
    return v;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 1, 2};
    vector<int> answer = find_duplicates(vec);
    for (auto x : answer)
    {
        cout << x << " ";
    }
}