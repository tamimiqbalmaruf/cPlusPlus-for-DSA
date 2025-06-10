#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << math + english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 25, 45, 75);
    sakib.total();

    Student rakib("Rakib Ahmed", 22, 50, 89);
    rakib.total();

    return 0;
}