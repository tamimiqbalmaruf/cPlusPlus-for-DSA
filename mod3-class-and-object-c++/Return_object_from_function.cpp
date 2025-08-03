#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student karim(10, 5, 4.2);
    return karim;
}

int main()
{

    Student karim = fun();

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}