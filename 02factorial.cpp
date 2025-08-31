#include <iostream>
using namespace std;
long long factorial(int n)
{
    if (n == 1 || n == 0)
    {

        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << " enter number = ";
    cin >> n;
    cout << endl
         << "the fact of a given no is = ";

    cout << factorial(n);
}