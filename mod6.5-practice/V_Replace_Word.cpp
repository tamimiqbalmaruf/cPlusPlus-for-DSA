#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int position = s.find("EGYPT");

    while (position != -1)
    {
        s.replace(position, 5, " ");
        position = s.find("EGYPT");
    }

    cout << s << endl;

    return 0;
}