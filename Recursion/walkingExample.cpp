#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    if (src == dest)
    {
        cout << "Reached Home";
        return;
    }

    reachHome(src + 1, dest);
}
int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);
}