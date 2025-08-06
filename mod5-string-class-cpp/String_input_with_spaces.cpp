#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cin.ignore();

    string s;
    // cin.getline(s, 100); // char s[100] not dynamic
    getline(cin, s);

    //cin >> s;  //without space

    cout << x << endl << s << endl;
    return 0;
}