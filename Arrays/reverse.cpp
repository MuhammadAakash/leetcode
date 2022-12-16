#include <iostream>
#include <stdio.h>

using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i <size; i++){
        cout << arr[i] << " " ;
    }
}




int main(){
    int arrOdd[5] = {2,4,3,5,7};
    int arrayEven[10] = {4,1,6,8,9,5,2,3,7,9};

    reverse(arrOdd, 5);
    // cout<<endl;
    reverse(arrayEven, 10);
    // cout<< endl;


    printArray(arrOdd, 5);
    cout<< endl;

    printArray(arrayEven, 10);
}