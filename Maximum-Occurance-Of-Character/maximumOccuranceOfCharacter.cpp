#include <iostream>
#include <stdio.h>

using namespace std;

char getMaxOccOfCharacter (string s) {
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i ++) {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maximum = -1;
    int ans = 0;
    for(int i = 0;  i < 26; i++) {
        if(maximum < arr[i]) {
            ans = i;
            maximum = arr[i];
        }
    }
    return 'a' + ans;
}

int main () {
    string s;
    cout << "Enter a string :"<< endl;
    cin >>s;
    cout << "Maximum character is : " << getMaxOccOfCharacter(s)<<endl;
}