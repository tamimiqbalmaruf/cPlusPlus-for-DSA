#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mn = min(a[i], mn);
    }

    int minFreq = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            minFreq++;
        }
    }

    (minFreq % 2 == 0) ? cout << "Unlucky" : cout << "Lucky";

    return 0;
}