#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin >> s >> t;

        string ns;
        int index = 0;

        for (int i = 0; i < s.size() || i < t.size(); i++)
        {
            if (i < s.size())
            {
                ns.push_back(s[i]);
            }

            if (i < t.size())
            {
                ns.push_back(t[i]);
            }
        }

        cout << ns << endl;
    }

    return 0;
}