#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int fibonacciNumber;

    cout << "Enter the place of Fabonacci Number: " << endl;
    cin >> fibonacciNumber;

    int ans = fibonacci(fibonacciNumber);
    cout << "Answer is :" << ans;
}