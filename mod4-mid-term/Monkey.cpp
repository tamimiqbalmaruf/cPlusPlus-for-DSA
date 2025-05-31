#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    while (getline(cin, s))
    {
        string alphabet = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                alphabet += s[i];
            }
        }

        sort(alphabet.begin(), alphabet.end());

        cout << alphabet << endl;
    }

    return 0;
}