#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
       if(a[i] < a[minIndex]){
        minIndex = i;
       }
       if(a[i] > a[maxIndex]){
        maxIndex = i;
       }
    }


    swap(a[minIndex], a[maxIndex]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}