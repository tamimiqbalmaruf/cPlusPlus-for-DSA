#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int mn = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                mn = min(a[i] + a[j] + j - i, mn);
            }
        }

        cout << mn << endl;
    }

    return 0;
}