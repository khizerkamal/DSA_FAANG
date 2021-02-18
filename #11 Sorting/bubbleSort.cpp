#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++) // - counter cuz after each teration last element
        {                                     // will be sorted so no need to iterate till
            if (arr[i] > arr[i + 1])          // n Program runs even without -counter
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}