#include <iostream>
using namespace std;

int power(int n)
{
    // Base Function
    if (n == 0)
        return 1;
    // Recursive Function
    return 2 * power(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number to check Power : ";
    cin >> n;

    int ans = power(n);
    cout << "Power of " << n << " is :" << ans;
}