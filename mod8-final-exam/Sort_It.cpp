#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    int totalMarks()
    {
        return math_marks + eng_marks;
    }
};

bool compare(Student a, Student b)
{
    if (a.totalMarks() == b.totalMarks())
    {
        return a.id < b.id;
    }
    else
    {
        return a.totalMarks() > b.totalMarks();
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id
             << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
