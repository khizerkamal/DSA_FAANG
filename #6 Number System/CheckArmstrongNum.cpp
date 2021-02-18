#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum;
    int originaln = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}