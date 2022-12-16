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
    int arr[10] = {1,2,2,2,2,2,3,4,5,6};
    cout<< "First Occurence of 1 is at " << firstOccurence(arr,10,1) << endl;
    cout<< "Right Occurence of 1 is at " << rightOccurence(arr,10,1) << endl;

    int leftIndex = firstOccurence(arr, 10, 1);
    int rightIndex = rightOccurence(arr, 10, 1);
    int totalNumberOfOccurence = (rightIndex - leftIndex) + 1;
    if (totalNumberOfOccurence == 0) {
        totalNumberOfOccurence = 1;
    }
    cout<< "Total Number of Occurence of 2 is :"<<totalNumberOfOccurence; 

}