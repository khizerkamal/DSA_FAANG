#include <iostream>
#include <climits>
using namespace std;

//Maximum Sum of Circular Subarray

// Function of Kadane Algo
int kadane(int a[], int n)
{
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main()
{

    //Reading Array
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Main Logic
    int wrapSum = 0;
    int nonWrapSum = 0;

    nonWrapSum = kadane(a, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        a[i] = -a[i];
    }
    wrapSum = sum + kadane(a, n);

    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}