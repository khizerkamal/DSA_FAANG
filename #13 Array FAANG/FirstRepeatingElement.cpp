#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

// AMAZON & ORACLE
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minIdx = INT_MAX;
    int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minIdx = min(minIdx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i; // Yaad rakhna hum Ai mein i daalty hain :-)
        }
    }

    if (minIdx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIdx + 1 << endl;
    }

    return 0;
}