#include <iostream>
using namespace std;

bool isFound(int *arr, int searchValue, int arraySize)
{
    if (arraySize == 0)
    {
        return false;
    }
    if (arr[0] == searchValue)
    {
        return true;
    }
    else
    {
        isFound(arr + 1, searchValue, arraySize - 1);
    }
}

int main()
{

    int arraySize;
    cout << "Enter Array Size :";
    cin >> arraySize;

    int *arr = new int[arraySize];

    cout << "Enter the values in Array : ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }
    int searchValue;
    cout << "What value you want to search in Array :";
    cin >> searchValue;

    bool valueIs = isFound(arr, searchValue, arraySize);
    if (valueIs)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}