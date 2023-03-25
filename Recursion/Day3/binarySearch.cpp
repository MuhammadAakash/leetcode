#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int searchValue)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == searchValue)
        return mid;
    if (arr[mid] > searchValue)
    {
        binarySearch(arr, start, mid - 1, searchValue);
    }
    else if (arr[mid] < searchValue)
    {
        binarySearch(arr, mid + 1, end, searchValue);
    }
}
int main()
{
    int searchValue, arraySize;
    cout << "Enter the array Size : ";
    cin >> arraySize;

    int *arr = new int[arraySize];

    // Creating array
    cout << "Enter array Values :" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    cout << "Now enter what value you want to search in the Given Array :";
    cin >> searchValue;

    bool answer = binarySearch(arr, 0, arraySize, searchValue);

    if (answer)
    {
        cout << "Value Found";
    }
    else
    {
        cout << "Value not Found";
    }
}