#include <iostream>
using namespace std;
int main()
{
    cout << "enter year = ";
    int year, notleap;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {

        cout << "leap year"<<endl;

    }
    else
    {
        cout << "not a leap year"<<endl;
    
    cout<<"next 5 leap years are =  ";

    for (int i = year; i < year + 25; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            cout << i << " ";
            
        }
    }
}
    return 0;
}