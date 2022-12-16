#include<iostream>
#include<stdio.h>

using namespace std;

int find_unique(int arr[], int size) {
    int ans =  0;
    for(int i = 0; i < size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}


int main() {
    int arr[] = {1,2,4,2,1,5,4};
    int number = find_unique(arr, 7);
    cout<< "Unique Number is : " << number;
}
