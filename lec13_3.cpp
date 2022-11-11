#include <bits/stdc++.h>
using namespace std;


// square root by binarysearch upto n decimal places.

long long int sqrtbybs(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int sq = mid * mid;
        if (sq == n)
        {
            return mid;
        }
        else if (n < sq)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precison, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precison; i++)
    {
        factor /= 10;
    }
    for (double j = ans; j * j < n; j += factor)
    {
        ans = j;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number:\n";
    cin >> n;

    int tempsoln = sqrtbybs(n);
    cout << "The precise answer is:\n";
    cout << morePrecision(n, 2, tempsoln);
}
