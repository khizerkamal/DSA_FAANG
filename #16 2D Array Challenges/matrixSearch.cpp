#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Main Logic
    bool found = false;
    int r = 0;
    int c = m - 1;
    while (r < n && c > 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        else if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found == true)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}