#include <stdio.h>
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int k) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k) {
            ans = mid;
            end = mid - 1;
        }
        else if (k > arr[mid]) {
            start = mid + 1;
        }
        else if (k < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
    
}
int rightOccurence(int arr[], int n, int k) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1;
        }
        else if (k > arr[mid]) {
            start = mid + 1;
        }
        else if (k < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
    
}
int main () {
    int arr[8] = {0,0,1,1,2,2,2,2};
    cout<< "First Occurence of 1 is at " << firstOccurence(arr,8,1) << endl;
    cout<< "Right Occurence of 1 is at " << rightOccurence(arr,8,1) << endl;
}