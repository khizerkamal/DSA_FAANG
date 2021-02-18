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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int t = factorial(i) / (factorial(i - j) * factorial(j));
            cout << t << "  ";
        }
        cout << endl;
    }

    return 0;
}