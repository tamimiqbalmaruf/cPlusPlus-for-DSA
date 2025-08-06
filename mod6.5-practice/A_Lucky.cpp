#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int sum_first = 0;
        int sum_last = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i < 3)
            {
                sum_first += s[i] - '0';
            }
            else
            {
                sum_last += s[i] - '0';
            }
        }

        if (sum_first == sum_last)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}