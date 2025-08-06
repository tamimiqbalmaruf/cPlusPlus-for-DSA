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
        cout << "Total marks of " << name << " = " << (math + english) << endl;
    }
};

int main()
{

    Student sakib("Sakib Ahmed", 15, 95, 70);
    Student rakib("Rakib Ahmed", 13, 71, 90);

    sakib.total();
    rakib.total();

    return 0;
}