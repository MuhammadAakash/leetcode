#include <stdio.h>
#include <iostream>
using namespace std;

int findTheSqrt(int n) {
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;
    long long int ans = -1;

    while (start <= end) 
    {
        long long int square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if(square < n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}

double morePrecision(int n, int precision, int tempVal) {
    double factor = 1;
    double  ans = tempVal;
    for(int i=0; i<precision; i++) {
        factor = factor/10;
        for (double j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int temp = findTheSqrt(37);
    cout<<"Sqrt of 37 is :"<< findTheSqrt(37)<< endl;
    double  precision = morePrecision(37, 3, temp);
    cout<<"Answer is: "<< precision;
}