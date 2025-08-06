#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool isPalindrome = true;

    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    isPalindrome ? cout << "YES" : cout << "NO";

    return 0;
}