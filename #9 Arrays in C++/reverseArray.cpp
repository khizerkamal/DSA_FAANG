#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int len = n;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = a[len - 1];
        a[len - 1] = temp;
        len--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}