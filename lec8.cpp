#include <iostream>
using namespace std;

void reverse(int arr1[], int arr2[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr2[start], arr1[end]);
        start++;
        end--;
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
int main()
{
    int length;
    int arr[] = {1, 2, 3,5,67};
    length = sizeof(arr) / sizeof(int);
    int a2[length];
    cout << length << endl;

    for (int i = 0; i < length; i++)
    {
        a2[i] = arr[length - 1 - i];
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
    for (int i = 0; i < length; i++)
    {
        cout << a2[i]<<" ";
    }

    cout << endl;
    int x = 3, y = 5;
    swap(x, y);
    cout << x << y << endl;
    
    reverse(arr,a2,length);
 cout << "\n";
    for (int i = 0; i < length; i++)
    {
        cout << a2[i]<<" ";
    }
    return 0;
}
// pass by value: two different storages in main and the specific function.
