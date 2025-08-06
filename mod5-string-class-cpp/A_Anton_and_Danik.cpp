#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int anton = 0;
    int danik = 0;

    for (auto it = s.begin(); it < s.end(); it++)
    {
        if (*it == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (danik > anton)
    {
        cout << "Danik";
    }
    else if (anton == danik)
    {
        cout << "Friendship";
    }

    return 0;
}