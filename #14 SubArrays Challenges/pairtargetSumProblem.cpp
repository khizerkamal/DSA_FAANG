#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //---------BRUTE-FORCE APPROACH
    //Reading Array
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    //Brute-Force Logic O(n^2)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    //Optimized Solution O(n)
    int low = 0;
    int high = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            break;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    return 0;
}