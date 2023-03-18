#include <iostream>
using namespace std;

void sayDigits(int n, string arr[])
{
    // Base case.
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    sayDigits(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(number, arr);
}