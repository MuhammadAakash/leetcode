#include <iostream>
using namespace std;

void bubbleSort(int *arr, int arraySize)
{
    if (arraySize == 0 || arraySize == 1)
        return;
    for (int i = 0; i < arraySize - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, arraySize - 1);
}
int main()
{
    int arraySize;
    cout << "Enter Array Size :";
    cin >> arraySize;

    int *arr = new int[arraySize];
    // Array Creation.

    cout << "Enter array Values : " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
}