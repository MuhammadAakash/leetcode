#include <iostream>

using namespace std;

int sumOfArray(int *arr, int size)
{
    // Base case
    // if (size <= 0)
    //     return 0;

    // return (sumOfArray(arr, size - 1) + arr[size - 1]);

    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int remainPart = sumOfArray(arr + 1, size - 1);
    int sum = arr[0] + remainPart;
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of  Array";
    cin >> size;
    int *arr = new int[size];

    // Creation of array

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Output values
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    // Sum of All numbers

    int total = sumOfArray(arr, size);
    cout << "Total Sum is :" << total;
}