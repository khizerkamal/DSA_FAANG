#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int flag = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= flag)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        flag -= 1;
        cout << endl;
    }
    //Second OPtimal Approach
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}