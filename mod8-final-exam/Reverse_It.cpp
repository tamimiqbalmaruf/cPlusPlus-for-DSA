#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;

    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    string tempSections[n];
    for (int i = 0; i < n; i++)
    {
        tempSections[i] = a[i].s;
    }

    reverse(tempSections, tempSections + n);

    for (int i = 0; i < n; i++)
    {
        a[i].s = tempSections[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}