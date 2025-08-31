#include <iostream>
using namespace std;
int main()
{
    int n, reverseno = 0;
    cout << "Enter a number = ";
    cin >> n;
    while (n != 0)
    {
        int lastdigit = n % 10;
        reverseno = reverseno * 10 + lastdigit;
        n = n / 10;
    }
    cout << "Reversed Number = " << reverseno;
    return 0;
}