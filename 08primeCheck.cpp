#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number = ";
    cin >> n;
    bool isPrime = true;
    if (n == 1)
    {
        isPrime = false; // 1 is neither prime nor composite
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
}