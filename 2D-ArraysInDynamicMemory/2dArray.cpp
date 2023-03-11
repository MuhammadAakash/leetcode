#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter col:";
    cin >> col;
    int **arr = new int *[row];
    // It creates multiple rows or 2D array of n size
    /* So, to create 2D array we are creating these
         pointers which store the address of each row till
         n, means each index of n is also an pointer and
         We want to create a row for each pointer.
         And by combining these rows we are able to
         create the 2D array
    */
    /* So, now question is how we create a row or an
         array corresponding to each pointer. So, we can do
         this by adding a for loop, like below */

    // Creation of 2D- Array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // n means number of columns.
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Showing Output
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // After completing work don't forget to release the memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // Deletes each row according to pointers.
    }

    delete[] arr; // Delete all pointers
}