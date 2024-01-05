#include <stdio.h>
#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternatives(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int evenArray[8] = {2, 1, 4, 5, 53, 25, 55, 33};
    int oddArray[9] = {43, 1, 53, 22, 66, 4, 8, 32, 78};

    swapAlternatives(evenArray, 8);
    printArray(evenArray, 8);

    swapAlternatives(oddArray, 9);
    printArray(oddArray, 9);
}