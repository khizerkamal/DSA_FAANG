#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{

    int n, r;
    cin >> n >> r;
    int ans = factorial(n) / (factorial(n - r) * factorial(r));
    cout << ans << endl;

    return 0;
}