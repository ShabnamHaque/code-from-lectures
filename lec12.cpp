#include <bits/stdc++.h>
using namespace std;

// FIRST & LAST OCCURRENCES IN AN ARRAY.

int first_occ(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
          
        }
        else if (arr[mid] > k)
        {
            e = mid - 1; // move left
        }
        else if (arr[mid] < k)
        {
            s = mid + 1; // move right
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int last_occ(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
          
        }
        else if (arr[mid] > k)
        {
            e = mid - 1; // move left
        }
        else if (arr[mid] < k)
        {
            s = mid + 1; // move right
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{int a[]={1,8,23,23,23,4,23,5};
cout<<first_occ(a,8,23)<<endl;
cout<<last_occ(a,8,23);
    return 0;
}