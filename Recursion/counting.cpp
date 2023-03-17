#include <iostream>

using namespace std;

void printCounting(int n)
{
    // Reverse Counting using Tail Recursion.
    // if (n == 0)
    //     return;
    // cout << n << endl;
    // printCounting(n - 1);

    // Right Counting using Head Recursion.
    if (n == 0)
        return;
    printCounting(n - 1);
    cout << n << endl;
}

int main()
{
    int countingNumber;
    cout << "Enter the Number :";
    cin >> countingNumber;

    printCounting(countingNumber);
}