#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> ans;
    if (t >= 1 && t <= 9261)
    {
        for (int j = 0; j < t; j++)
        {
            {
                vector<int> a;
                for (int i = 0; i < 3; i++)
                {
                    int n;
                    cin >> n;
                    if (n >= 0 && n <= 20)
                        a.push_back(n);
                }
            }
        }
        
    }
    return 0;
}