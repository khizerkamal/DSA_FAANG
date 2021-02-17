#include <iostream>
using namespace std;

int main()
{
    //Floyd's Triangle
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }

    return 0;
}