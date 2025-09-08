#include <iostream>
using namespace std;
int main()
{
    int failcount= 0;
    int marks[5];
    cout << "Enter marks of 5 subjects = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > 90 && marks[i] <= 100)
        {
            cout << "grade A" << endl;
        }
        else if (marks[i] > 80 && marks[i] <= 90)
        {
            cout << "grade B" << endl;
        }
        else if (marks[i] > 60 && marks[i] <= 80)
        {
            cout << "grade C" << endl;
        }
        else if (marks[i] > 40 && marks[i] <= 60)
        {
            cout << "grade D" << endl;
        }
        else if (marks[i] >= 0 && marks[i] <= 40)
        {
            cout << "grade F" << endl;
        }
        else
        {
            cout << "invalid marks" << endl;
        }

        if (marks[i] < 40)
        {
            failcount++;
        }
    }
    if (failcount >= 2)
    {
        cout << "repeat the year";
    }
    else
    {
        cout << "you have  passed";
    }
    return 0;
}
