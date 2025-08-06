#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;

    Cricketer(int jersey_no, string country)
    {
        this->jersey_no = jersey_no;
        this->country = country;
    }
};

int main()
{
    Cricketer *tamim = new Cricketer(7, "Bangla");
    Cricketer *rafi = new Cricketer(100, "Bangla");

    // rafi->country = tamim->country;
    // rafi->jersey_no = tamim->jersey_no;

    *rafi = *tamim; // dereference

    delete tamim;

    cout << rafi->jersey_no << " " << rafi->country << endl;

    return 0;
}