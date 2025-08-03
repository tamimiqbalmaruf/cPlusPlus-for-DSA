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

int main()
{

    Student rahim(10, 8, 4.5);
    Student bahim(20, 8, 4.7);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << bahim.roll << " " << bahim.cls << " " << bahim.gpa << endl;

    return 0;
}