#include<stdio.h>
#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
        
    } 
    return -1;
}

int main () {
    int even[8] = {2,4,6,9,14,20,33,40};
    int odd[7] = {9,10,30,35,50,68,80};

    int evenResult = binarySearch(even, 8, 44);
    cout << "Index of 44 is : " << evenResult << endl;

    int oddResult = binarySearch(odd, 7, 94);
    cout << "Index of 94 is : " << oddResult;
}