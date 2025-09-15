#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double arr[100], sum_sq = 0, avg;
    double n;
    cout << "enter no of elements = ";
    cin >> n;
    cout << "Enter " << n << " elements  = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        avg += arr[i];
    }

    avg = avg / n;

    for (int i = 0; i < n; i++)
    {
        sum_sq += arr[i] * arr[i];
    }
    double standard_dev = 0;
    standard_dev = sqrt((sum_sq / n) - (avg * avg));
    // standard deviation

    cout << "Standard deviation are = " << standard_dev;
}