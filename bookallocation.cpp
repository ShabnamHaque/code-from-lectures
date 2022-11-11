#include <bits/stdc++.h>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m)
{
    int sum = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int array1[] = {12, 34, 67, 90}; //67+34=113,90+12=102 min combinations for both students
    cout << "least max is:\n";
    cout << allocateBooks(array1, 4, 2);
    cout << "\nleast max is:\n";
    cout << allocateBooks(array1, 4, 3);
    return 0;
}