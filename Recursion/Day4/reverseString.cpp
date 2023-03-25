#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    // Base case.
    if (start > end)
    {
        return;
    }
    swap(str[start], str[end]);
    start++;
    end--;
    reverseString(str, start, end);
}
int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;

    cout << "String is :" << str << endl;

    reverseString(str, 0, str.length() - 1);
    cout << "Reverse string is :" << str;
}