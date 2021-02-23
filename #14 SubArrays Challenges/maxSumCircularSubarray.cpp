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
    //---------Main Logic---------
    int wrapSum = 0;     //For Case I (Non-Circular)
    int nonWrapSum = 0;  //For Case II (Circular)
    
    //Solving Case I
    nonWrapSum = kadane(a, n);

    //Solving Case II
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }
    wrapSum = totalSum + kadane(a, n);

    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}