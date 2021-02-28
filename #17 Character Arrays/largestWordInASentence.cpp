#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n); //To store whole sentence in one index of array
    cin.ignore();        // To Clear Buffer

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxSt = 0;

    while (true)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxSt = st;
            }
            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }
    cout << maxLen << endl;
    for (int i = 0; i < maxSt; i++)
    {
        cout << arr[maxSt + i];
    }

    return 0;
}