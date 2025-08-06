#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    // cout << s.size() << endl;

    // cout << s.max_size() << endl; // 10^6

    //  cout << s.capacity() << endl;

    // s.clear();

    // if (s.empty() == true)
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }

    // s.resize(4);

    s.resize(15, 'o');

    cout << s << endl;

    return 0;
}