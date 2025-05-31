#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    double total_marks;
};

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        Student s1, s2, s3;

        cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

        Student best = s1;

        if (s2.total_marks > best.total_marks)
        {
            best = s2;
        }
        else if (s2.total_marks == best.total_marks && s2.id < best.id)
        {
            best = s2;
        }

        // Compare with s3
        if (s3.total_marks > best.total_marks)
        {
            best = s3;
        }
        else if (s3.total_marks == best.total_marks && s3.id < best.id)
        {
            best = s3;
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.total_marks << endl;
    }

    return 0;
}