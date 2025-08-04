#include <bits/stdc++.h>
using namespace std;

void shiftZeroesRight(int a[], int n)
{
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[index++] = a[i];
        }
    }

    while (index < n)
    {
        a[index++] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    shiftZeroesRight(a, n);

    return 0;
}