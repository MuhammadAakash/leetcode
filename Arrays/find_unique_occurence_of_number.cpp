#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> map;
    unordered_map<int, int> map2;
    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }

    for (auto i : map)
    {
        map2[i.second];
    }

    if (map.size() == map2.size())
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    bool unique_occurence = uniqueOccurrences(arr);
    cout << unique_occurence << endl;
}