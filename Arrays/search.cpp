#include<iostream>
#include<stdio.h>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}



int main(){
    int arr[5] = {4,2,9,5,1};
    int size = 5;
    int key;
    cout << "Enter the value to search in an array" << endl;
    cin >> key;
    bool found = search(arr, size, key );

    if(found){
        cout << "Value is Found in Array :" << endl;
    } 
    else{
        cout << "Value is not found in Array : " << endl;
    }
}