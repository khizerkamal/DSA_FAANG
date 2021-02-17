#include <iostream>
using namespace std;

int main()
{
    //Sum of numbers till n
    int n;
    cin >> n;
    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum += counter;
    }
    cout << sum << endl;

    return 0;
}