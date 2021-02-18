#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int mx = INT_MIN;
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        cout << mx << " ";
    }
    cout << endl;

    return 0;
}