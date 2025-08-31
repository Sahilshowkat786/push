#include <iostream>
using namespace std;
int main()
{
    int marks[5], total = 0;
    cout << "Enter marks of 5 subjects = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }
    float avg = total / 5.0;
    float per = (total / 500.0) * 100;
    char grade;

    if (per >= 90)
        grade = 'A';
    else if (per > 80)
        grade = 'B';
    else if (per > 60)
        grade = 'C';
    else if (per > 45)
        grade = 'D';
    else
        grade = 'F';
    cout << "total marks = " << total << endl;
    cout << "avg marks = " << avg << endl;
    cout << "percentage = " << per << endl;
    cout << "grade = " << grade << endl;
    return 0;
}