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

        string s;
        cin >> s;

        string ns;
        int totalBallon = 0;

        for (char c : s)
        {
            if (ns.find(c) != string::npos)
            {
                ns.push_back(c);
                totalBallon++;
            }
            else
            {
                ns.push_back(c);
                totalBallon += 2;
            }
        }

        cout << totalBallon << endl;
    }

    return 0;
}