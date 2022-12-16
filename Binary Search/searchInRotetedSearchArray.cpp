#include <iostream>
#include <stdio.h>
using namespace std;

int getPivotElement(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start < end) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start )/2;
    
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int main() {
    // Write your code here.
    int arr[7] = {4,5,7,9,1,2,3};
    int n = 7;
    int key = 3;
    int pivot = getPivotElement(arr, n);
    cout<< "Pivot is :"<< pivot<< endl;
    if (key >= arr[pivot] && key <= arr[n - 1]) {
        cout<< "Key is on " << binarySearch(arr, pivot, n-1 , key);
    }
    else {
        cout<< "Key is on 2: " << binarySearch(arr, 0, pivot-1,  key);
    }
}