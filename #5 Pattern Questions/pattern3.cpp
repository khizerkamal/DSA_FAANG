#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= 1; j--)
        {
            cout << "* ";
        }
        m -= 1;
        cout << endl;
    }

    return 0;
}