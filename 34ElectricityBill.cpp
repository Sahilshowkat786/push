#include <iostream>
using namespace std;
int main()
{
    int units;
    cout << "Enter units consumed = ";
    cin >> units;
    float bill;
    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units > 100 && units <= 200)
    {
        bill = 100 * 1.50 + (units - 100) * 2.50;
    }
    else
    {
        bill = 100 * 1.50 + 100 * 2.50 + (units - 200) * 4.00;
    }
    if (units > 500)
    {
        bill += bill * 0.10; // adding 10% surcharge
    }
    cout << "your electricity bill = " << bill << endl;
    return 0;
}