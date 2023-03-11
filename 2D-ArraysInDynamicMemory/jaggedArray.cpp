#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter rows:";
    cin >> row;
    cout << "Enter col: ";
    cin >> col;
    int **arr = new int *[row];
    int *cols = new int[col]; // using as how much cols in each row.

    // create cols array
    cout << "Enter cols values : ";
    for (int i = 0; i < col; i++)
    {
        cin >> cols[i];
    }

    cout << endl;
    // Create 2D jagged array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[cols[i]];
    }

    // taking input
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Showing output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // Deletes each row according to pointers.
    }

    delete[] arr;
    delete[] cols;
}