#include<iostream>
#include<stdio.h>

using namespace std;

void printAll(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << ' ';

    }
    cout<< endl;
}


void swap_Allternate(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void swap_number(){
    
}

int main(){
    int evenArray[8] = {3,7,2,9,5,0,1,66};
    int oddArray[5] = {55,33,11,66,00};

    swap_Allternate(evenArray, 8);
    printAll(evenArray, 8);

    swap_Allternate(oddArray, 5);
    printAll(oddArray, 5);
}