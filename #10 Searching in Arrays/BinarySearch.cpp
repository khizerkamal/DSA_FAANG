#include <iostream>
using namespace std;

int binarySearch(int array[], int n, int key)
{
    int l = 0;
    int h = n;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(array, n, key) << endl;

    return 0;
}
