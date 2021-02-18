#include <iostream>
using namespace std;

int main()
{

    // 1234 --> 4321
    int n;
    cin >> n;
    cout << "Entered  Number is: " << n << endl;
    int reverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    cout << "Reversed Number is: " << reverse << endl;

    return 0;
}