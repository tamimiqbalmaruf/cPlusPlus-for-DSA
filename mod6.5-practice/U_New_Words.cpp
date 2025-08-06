#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char &c : s)
    {
        c = toupper(c);
    }

    int freq[128] = {0};

    for (char c : s)
    {
        freq[c]++;
    }

    int count = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});

    cout << count << endl;

    return 0;
}